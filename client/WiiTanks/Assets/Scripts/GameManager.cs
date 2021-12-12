using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{

    public GameObject gameOverScreen;
    public Text gameOverText;

    public void GameOver(bool win)
    {
        gameOverScreen.SetActive(true);
        if (win)
        {
            gameOverText.text = "You Won! ;)";
        }
        else
        {
            gameOverText.text = "You Lost :(";
        }
    }
 }
