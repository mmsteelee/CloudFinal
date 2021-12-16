using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public int maxHits = 2;
    public Rigidbody2D rb;
    public GameObject bullet;
    public GameObject explosion;
    public float force = 30f;
    public float maxDist;

    int numHits = 0;

    private void Start()
    {
        rb.AddForce(transform.up * force, ForceMode2D.Impulse);
    }

    private void Update()
    {
        if (transform.position.magnitude > maxDist)
        {
            Destroy(bullet);
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (numHits == maxHits || collision.gameObject.tag == "Bullet" || collision.gameObject.tag == "Tank")
        {
            GameObject exp = Instantiate(explosion, transform.position, transform.rotation);
            Destroy(exp, 0.5f);
            Destroy(bullet);
        }
        else
        {
            Vector3 norm = collision.contacts[0].normal;   
            rb.AddForce(norm.normalized * (force - 5), ForceMode2D.Impulse); 
            ++numHits;
        }
    }
}
