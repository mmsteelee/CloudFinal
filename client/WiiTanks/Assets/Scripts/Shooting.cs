using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shooting : MonoBehaviour
{
    public Transform firePoint;
    public GameObject player;
    public float coolDown;

    private float timeSinceShot;

    // Start is called before the first frame update
    void Start()
    {
        timeSinceShot = coolDown;
    }

    // Update is called once per frame
    void Update()
    {
        if (!player.GetComponent<PlayerController>().canMove)
        {
            return;
        }

        if (Input.GetMouseButtonUp(0) && timeSinceShot > coolDown)
        {
            player.GetComponent<PlayerController>().Shoot();
        } else
        {
            timeSinceShot += Time.deltaTime;
        }
    }
}
