using UnityEngine;

public class PlayerController : MonoBehaviour
{
    
    /////*******************************************/////
    /////                   VARS                    /////  
    /////*******************************************/////

    public Track trackLeft;
    public Track trackRight;
    public GameObject Gun;
    public GameObject Body;
    public GameObject manager;
    public GameObject explosion;
    public Transform firePoint;
    public GameObject bulletPrefab;

    public string keyMoveForward;
    public string keyMoveReverse;
    public string keyMoveRight;
    public string keyMoveLeft;
    
   // public float coolDown;
    public float maxSpeed;
    public float rotationSpeed;
    public float acceleration;
    public float deceleration;

    public bool canMove;

    float speed = 0f;
    Vector3 velocity;
    int seq;
  //  private float timeSinceShot;
    private void Start()
    {
        seq = 0;
        canMove = false;
        manager = GameObject.Find("GameManager");   
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

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Bullet")
        {
            WebSocketService.instance().SendEndGame();
            Vector3 expPos = transform.position;
            expPos.z = -6;
            GameObject exp = Instantiate(explosion, expPos, Quaternion.identity);
            Body.SetActive(false);
            Gun.SetActive(false);
            exp.transform.localScale = new Vector3(10, 10);
        }
    }

    /////*******************************************/////
    /////                 UPDATE                    /////  
    /////*******************************************/////

    private void FixedUpdate()
    {
        if (canMove)
        {
            PlayerMove();
        }
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
        string isMoving = "no";

        if (velocity != Vector3.zero)
        {
            trackStart();
            isMoving = "yes";
            float a = Mathf.Atan2(velocity.y, velocity.x) * Mathf.Rad2Deg - 90;

            Quaternion rotation = Quaternion.AngleAxis(a, Vector3.forward);

            Body.transform.rotation = Quaternion.Lerp(Body.transform.rotation, rotation, rotationSpeed * Time.fixedDeltaTime);

        }
        else
        {
            trackStop();
        }

        if (seq % 2 == 0)
        {
            WebSocketService.instance().SendPosition(transform.position, Body.transform.rotation, Gun.transform.rotation, isMoving, seq);
        }
        ++seq;

        Vector2 positionOnScreen = Camera.main.WorldToViewportPoint(transform.position);
        Vector2 mouseOnScreen = (Vector2)Camera.main.ScreenToViewportPoint(Input.mousePosition);
        float angle = AngleBetweenTwoPoints(positionOnScreen, mouseOnScreen);
        Gun.transform.rotation = Quaternion.Euler(new Vector3(0f, 0f, angle + 90f));
    }

    float AngleBetweenTwoPoints(Vector3 a, Vector3 b)
    {
        return Mathf.Atan2(a.y - b.y, a.x - b.x) * Mathf.Rad2Deg;
    }
    public void Shoot()
    {
        Instantiate(bulletPrefab, firePoint.position, firePoint.rotation);
        WebSocketService.instance().SendShoot(firePoint.position, firePoint.rotation);
    }

}