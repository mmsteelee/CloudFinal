using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PositionManager : MonoBehaviour
{
    private GameObject enemy = null;
    private GameObject player = null;

    public GameObject playerPrefab;
    public GameObject enemyPrefab;
    public GameObject bulletPrefab;
    public Text startText;

    public void initPlayers(PlayerPositionMessage message)
    {
        player = Instantiate(playerPrefab, message.currentPos, message.currentRot);
        enemy = Instantiate(enemyPrefab, message.enemyPos, Quaternion.identity);

        startText.GetComponent<StartText>().StartCountDown(player);
    }

    public void Explode(string _player)
    {
        if (_player == "player")
        {
            player.GetComponent<PlayerController>().Explode();
        } else if (_player == "enemy")
        {

        }
    }

    public void updateEnemy(PlayerPositionMessage message)
    {
        enemy.GetComponent<Enemy>().BufferState(message);
    }

    public void fireBullet(BulletMessage message)
    {
        Instantiate(bulletPrefab, message.firePoint, message.gunDir);
    }
}
