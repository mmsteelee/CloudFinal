using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Loading : MonoBehaviour
{
    public Text text;
    public float newDotTime;
    public int maxDots;

    float timeSinceLastDot = 0;
    int numDots = 1;
    // Update is called once per frame
    void Update()
    {
        if (timeSinceLastDot > newDotTime)
        {
            timeSinceLastDot = 0;
            if (numDots < maxDots)
            {
                text.text += ".";
            } 
            else
            {
                numDots = 0;
                text.text = ".";
            }
            ++numDots;
        }
        else
        {
            timeSinceLastDot += Time.deltaTime;
        }
    }
}
