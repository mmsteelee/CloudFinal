using UnityEngine;
using UnityEngine.UI;
using NativeWebSocket;

public class WebSocketService : MonoBehaviour
{
    private static WebSocketService inst = null;
    private WebSocket webSocket;
    private bool intentionalClose = false;
    private string matchId;
    
    public bool matchInitialized = false;
    public string playerNum;
    public string enemyNum;
    public GameObject loadScreen;
    public Text loadScreenText;
    public PositionManager positionManager;
    public GameManager gameManager;


    public string webSocketDns = "wss://1phlog4lg0.execute-api.us-east-1.amazonaws.com/Demo";
    public const string FirstToJoinOp = "0";
    public const string RequestStartOp = "1";
    public const string PlayingOp = "11";
    public const string BulletOp = "5";
    public const string YouWonOp = "91";
    public const string YouLostOp = "92";
    public const string BulletHitOp = "9";
    public const string OpponentPositionOp = "21";

    // Start is called before the first frame update
    static public WebSocketService instance() { 
        if (inst == null)
        {
            inst = GameObject.Find("WebSocket").GetComponent<WebSocketService>();
        }

        return inst;
    }

    private void ProcessReceivedMessage(string message)
    {
        GameMessage gameMessage = JsonUtility.FromJson<GameMessage>(message);

        if (gameMessage.opcode == PlayingOp)
        {
            Debug.Log("Playing op code received: player 2 joined, game started");
            matchId = gameMessage.uuid;

            PlayerPositionMessage posMessage = JsonUtility.FromJson<PlayerPositionMessage>(message);
            playerNum = posMessage.player;
            if (playerNum == "1")
            {
                enemyNum = "2";
            }
            else
            {
                enemyNum = "1";
            }
            
            Debug.Log("Turning loading screen off");
            loadScreen.SetActive(false);
            matchInitialized = true;
            // init the player
            positionManager.initPlayers(posMessage);
        }
        else if (gameMessage.opcode == OpponentPositionOp)
        {
            PlayerPositionMessage posMessage = JsonUtility.FromJson<PlayerPositionMessage>(message);
            positionManager.updateEnemy(posMessage);
        }
        else if (gameMessage.opcode == BulletOp)
        {
            BulletMessage bulMessage = JsonUtility.FromJson<BulletMessage>(message);
            positionManager.fireBullet(bulMessage);
        }
        else if (gameMessage.opcode == YouWonOp)
        {
            intentionalClose = true;
            gameManager.GameOver(GameManager.WIN);
        }
        else if (gameMessage.opcode == YouLostOp)
        {
            intentionalClose = true;
            gameManager.GameOver(GameManager.LOST);
        }
        else if (gameMessage.opcode == FirstToJoinOp)
        {
            matchId = gameMessage.uuid;
        }
    }

    // Establishes the connection's lifecycle callbacks.
    // Once the connection is established, OnOpen, it automatically attempts to create or join a game through the RequestStartOp code.
    private void SetupWebsocketCallbacks()
    {
        webSocket.OnOpen += () =>
        {
            Debug.Log("Connection open!");
            intentionalClose = false;
            GameMessage startRequest = new GameMessage("OnMessage", RequestStartOp);
            SendWebSocketMessage(JsonUtility.ToJson(startRequest));
        };

        webSocket.OnClose += (e) =>
        {
            Debug.Log("Connection closed!");

            // only do this if someone quit the game session, and not for a game ending event
            if (!intentionalClose)
            {
                UnityMainThreadHelper.wkr.AddJob(() =>
                {
                    gameManager.GameOver(GameManager.DISCONNECT);
                });
            }
        };

        webSocket.OnMessage += (bytes) =>
        {
            Debug.Log("OnMessage!");
            string message = System.Text.Encoding.UTF8.GetString(bytes);
            Debug.Log(message.ToString());

            ProcessReceivedMessage(message);
        };

        webSocket.OnError += (e) =>
        {
            Debug.Log("Error! " + e);
        };
    }

    // Connects to the websocket
    async public void FindMatch()
    {
        // waiting for messages
        await webSocket.Connect();
    }


    public void SendPosition(Vector3 pos, Quaternion rot, Quaternion gunRot, string moving, int seq)
    {
        GameMessage posMessage = new PlayerPositionMessage("OnMessage", OpponentPositionOp, gunRot, rot, pos, new SerializableVector3(), "", moving, seq);
        posMessage.uuid = matchId;
        SendWebSocketMessage(JsonUtility.ToJson(posMessage));
    }

    public void SendShoot(SerializableVector3 pos, SerializableQuaternion rot)
    {
        BulletMessage message = new BulletMessage("OnMessage", BulletOp, rot, pos);
        message.uuid = matchId;
        SendWebSocketMessage(JsonUtility.ToJson(message));
    }

    public void SendEndGame()
    {
        GameMessage message = new GameMessage("OnMessage", BulletHitOp);
        message.uuid = matchId;
        SendWebSocketMessage(JsonUtility.ToJson(message));
    }

    public async void SendWebSocketMessage(string message)
    {
        if (webSocket != null && webSocket.State == WebSocketState.Open)
        {
            // Sending plain text
            await webSocket.SendText(message);
        }
    }

    private async void OnApplicationQuit()
    {
        await webSocket.Close();
    }

    public async void QuitGame()
    {
        intentionalClose = true;
        matchInitialized = false;
        await webSocket.Close();
    }

    void Start()
    {
        Debug.Log("Websocket start");
        intentionalClose = false;

        webSocket = new WebSocket(webSocketDns);

        SetupWebsocketCallbacks();
        FindMatch();
    }

    void Update()
    {
#if !UNITY_WEBGL || UNITY_EDITOR
       
        webSocket.DispatchMessageQueue();
        
#endif
    }

    public void init() { }

    protected WebSocketService() {}
}
