using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{

    public GameObject gameOverScreen;
    public Text gameOverText;

    public const int WIN = 0;
    public const int LOST = 1;
    public const int DISCONNECT = 2;

    public void GameOver(int result)
    {
        gameOverScreen.SetActive(true);
        if (result == WIN)
        {
            gameOverText.text = "You Won! ;)";
        }
        else if (result == LOST)
        {
            gameOverText.text = "You Lost :(";
        } else if (result == DISCONNECT)
        {
            gameOverText.text = "Player Disconnected";
        }
    }
 }
