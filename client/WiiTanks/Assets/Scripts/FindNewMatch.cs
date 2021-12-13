using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class FindNewMatch : MonoBehaviour
{
    public void PlayGame()
    {
        Debug.Log("Button Pressed");
        SceneManager.LoadScene(1);
    }
}
