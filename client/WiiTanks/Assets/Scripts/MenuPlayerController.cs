using UnityEngine;

public class MenuPlayerController : MonoBehaviour
{

    /////*******************************************/////
    /////                   VARS                    /////  
    /////*******************************************/////

    public Track trackLeft;
    public Track trackRight;
    public GameObject Gun;
    public GameObject Body;

    public string keyMoveForward;
    public string keyMoveReverse;
    public string keyMoveRight;
    public string keyMoveLeft;

    public float maxSpeed;
    public float rotationSpeed;
    public float acceleration;
    public float deceleration;

    float speed = 0f;
    Vector3 velocity;

    /////*******************************************/////
    /////                 UPDATE                    /////  
    /////*******************************************/////

    private void FixedUpdate()
    {
        PlayerMove();
    }


    /////*******************************************/////
    /////                METHODS                    /////  
    /////*******************************************/////

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

    void PlayerMove()
    {
        Vector3 newDirection = new Vector3(0f, 0f, 0f);
        bool acc = false;

        if (Input.GetKey(keyMoveForward))
        {
            newDirection.y += 1;
            acc = true;
        }
        if (Input.GetKey(keyMoveReverse))
        {
            newDirection.y -= 1;
            acc = true;
        }
        if (Input.GetKey(keyMoveLeft))
        {
            newDirection.x -= 1;
            acc = true;
        }
        if (Input.GetKey(keyMoveRight))
        {
            newDirection.x += 1;
            acc = true;
        }

        speed = Mathf.Clamp(acc ? speed + acceleration : speed - deceleration, 0f, maxSpeed);

        newDirection.Normalize();
        velocity = newDirection * speed;

        transform.position += velocity * Time.fixedDeltaTime;
        // string isMoving = "no";

        if (velocity != Vector3.zero)
        {
            trackStart();
            //isMoving = "yes";
            float a = Mathf.Atan2(velocity.y, velocity.x) * Mathf.Rad2Deg - 90;

            Quaternion rotation = Quaternion.AngleAxis(a, Vector3.forward);

            Body.transform.rotation = Quaternion.Lerp(Body.transform.rotation, rotation, rotationSpeed * Time.fixedDeltaTime);

        }
        else
        {
            trackStop();
        }

        //WebSocketService.instance().SendPosition(transform.position, Body.transform.rotation, Gun.transform.rotation, isMoving);

        Vector2 positionOnScreen = Camera.main.WorldToViewportPoint(transform.position);
        Vector2 mouseOnScreen = (Vector2)Camera.main.ScreenToViewportPoint(Input.mousePosition);
        float angle = AngleBetweenTwoPoints(positionOnScreen, mouseOnScreen);
        Gun.transform.rotation = Quaternion.Euler(new Vector3(0f, 0f, angle + 90f));
    }

    float AngleBetweenTwoPoints(Vector3 a, Vector3 b)
    {
        return Mathf.Atan2(a.y - b.y, a.x - b.x) * Mathf.Rad2Deg;
    }
}