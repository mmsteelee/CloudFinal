using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shooting : MonoBehaviour
{
    public Transform firePoint;
    public GameObject bulletPrefab;

    public float coolDown;

    private float timeSinceShot;

    private void Start()
    {
        timeSinceShot = coolDown;
    }

    // Update is called once per frame

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Mouse0) && timeSinceShot > coolDown)
        {
            Shoot();
            timeSinceShot = 0f;
        } else
        {
            timeSinceShot += Time.deltaTime;
        }
    }

    void Shoot()
    {
        Instantiate(bulletPrefab, firePoint.position, firePoint.rotation);
        WebSocketService.instance().SendShoot(firePoint.position, firePoint.rotation);
    }
}
