using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public int maxHits = 2;
    public Rigidbody2D rb;
    public GameObject explosion;
    public float force = 30f;

    int numHits = 0;

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (numHits == maxHits || collision.gameObject.tag == "Bullet")
        {
            GameObject exp = Instantiate(explosion, transform.position, transform.rotation);
            Destroy(exp, 0.5f);
            Destroy(gameObject);
        }
        else
        {
            Vector3 norm = collision.contacts[0].normal;
            rb.AddForce(norm.normalized * force, ForceMode2D.Impulse); 
            ++numHits;
        }
    }
}
