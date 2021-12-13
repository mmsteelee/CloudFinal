using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public const int WIN = 0;
    public const int LOST = 1;
    public const int DISCONNECT = 2;

    public void GameOver(int result)
    {
        if (result == WIN)
        {
            SceneManager.LoadScene(2);
        }
        else if (result == LOST)
        {
            SceneManager.LoadScene(3);
        } else if (result == DISCONNECT)
        {
            SceneManager.LoadScene(2);
        }
    }
 }
