using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PositionManager : MonoBehaviour
{
    private GameObject enemy = null;
    private GameObject player = null;

    public GameObject playerPrefab;
    public GameObject enemyPrefab;

    public void initPlayers(PlayerPositionMessage message)
    {
        player = Instantiate(playerPrefab, message.currentPos, message.currentRot);
        enemy = Instantiate(enemyPrefab, message.enemyPos, Quaternion.identity);
    }

    public void updateEnemy(PlayerPositionMessage message)
    {
        enemy.GetComponent<Enemy>().BufferState(message);
    }
}
