using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StartText : MonoBehaviour
{
    public Text text;
    public GameObject player;
    public int totalTime;

    public float curTime;
    public int curNum;
    public bool counting = false;
    // Start is called before the first frame update
    
    public void StartCountDown(GameObject _player)
    {
        curTime = 0f;
        curNum = totalTime;
        player = _player;
        counting = true;
        text.gameObject.SetActive(true);
    }

    private void Update()
    {
        if (counting)
        {
            if (curNum == 0)
            {
                text.text = "GO!";
            } else if (curNum > 0) { 
                text.text = curNum.ToString();
            }
            
            curTime += Time.deltaTime;

            if (curTime > 1f)
            {
                curTime = 0f;
                curNum -= 1;
                if (curNum < 0)
                {
                    text.gameObject.SetActive(false);
                    counting = false;
                    player.GetComponent<PlayerController>().canMove = true;
                }
            }
        }
    }
}
