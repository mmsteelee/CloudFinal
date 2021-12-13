using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public GameObject enemy;
    public GameObject Body;
    public GameObject Gun;
    public Track trackLeft;
    public Track trackRight;

    private Queue<PlayerPositionMessage> enemyPositionMessageQueue;
    private Vector3 desiredPosition;
    private Quaternion desiredRotation;
    private Quaternion desiredGunRotation;
    private bool moving = false;
    private int seq = 0;

    public float maxSpeed;
    public float rotationSpeed;
    public float minSpeed = 0.01f;
    void Start()
    {
        enemyPositionMessageQueue = new Queue<PlayerPositionMessage>();

        desiredPosition = enemy.transform.position;
        desiredRotation = Body.transform.rotation;
        desiredGunRotation = Gun.transform.rotation;

        Debug.Log("Enemy start");
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

        Vector3 difference = desiredPosition - enemy.transform.position;

        if (moving)
        {
            trackStart();
            enemy.transform.position += difference.normalized * Time.fixedDeltaTime * maxSpeed;
            
            Body.transform.rotation = Quaternion.Lerp(Body.transform.rotation, desiredRotation, rotationSpeed * Time.fixedDeltaTime);
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
