using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public GameObject enemy;
    public GameObject Body;
    public GameObject Gun;
    public GameObject explosion;
    public Track trackLeft;
    public Track trackRight;

    private Queue<PlayerPositionMessage> enemyPositionMessageQueue;
    private Vector3 desiredPosition;
    private Quaternion desiredRotation;
    private Quaternion desiredGunRotation;
    private bool moving = false;
    private int seq;

    public float maxSpeed;
    public float rotationSpeed;
    void Start()
    {
        seq = 0;
        enemyPositionMessageQueue = new Queue<PlayerPositionMessage>();

        desiredPosition = enemy.transform.position;
        desiredRotation = Body.transform.rotation;
        desiredGunRotation = Gun.transform.rotation;

        Debug.Log("Enemy start");
    }

    public void Explode()
    {
        Vector3 expPos = transform.position;
        expPos.z = -6;
        GameObject exp = Instantiate(explosion, expPos, Quaternion.identity);
        Body.SetActive(false);
        Gun.SetActive(false);
        exp.transform.localScale = new Vector3(10, 10);
    }

    private void FixedUpdate()
    {
        if (WebSocketService.instance().matchInitialized && enemyPositionMessageQueue != null)
        {
            // Check if we have the next sequence to render
            if (enemyPositionMessageQueue.Count != 0)
            {
                PlayerPositionMessage enemyPositionToRender = enemyPositionMessageQueue.Dequeue();
                if (enemyPositionToRender.seq >= seq)
                {
                    desiredPosition = enemyPositionToRender.currentPos;
                    desiredRotation = enemyPositionToRender.currentRot;
                    desiredGunRotation = enemyPositionToRender.gunRot;
                    moving = enemyPositionToRender.moving == "yes";
                    seq = enemyPositionToRender.seq;
                }
            }

            SetTransform();
        }
    }

    private void SetTransform()
    {
        Gun.transform.rotation = desiredGunRotation;
        enemy.transform.position = Vector3.Lerp(enemy.transform.position, desiredPosition, maxSpeed * Time.fixedDeltaTime);
        Body.transform.rotation = Quaternion.Lerp(Body.transform.rotation, desiredRotation, rotationSpeed * Time.fixedDeltaTime);
        
        if (moving)
        {
            trackStart();
           
        } else
        {
            trackStop();
        }
    }

    void trackStart()
    {
        trackLeft.animator.SetBool("isMoving", true);
        trackRight.animator.SetBool("isMoving", true);
    }

    void trackStop()
    {
        trackLeft.animator.SetBool("isMoving", false);
        trackRight.animator.SetBool("isMoving", false);
    }


    public void BufferState(PlayerPositionMessage state)
    {
        // only add enemy position messages, for now
        if (state.opcode == WebSocketService.OpponentPositionOp)
        {
            enemyPositionMessageQueue.Enqueue(state);
        }
    }
}
