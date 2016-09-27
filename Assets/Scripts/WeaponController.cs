using UnityEngine;
using System.Collections;

public class WeaponController : MonoBehaviour {

	private AudioSource audioSource;
	public GameObject shot;
	public Transform shotSpawn;
	public float fireRate;
	public float nextFire;

	// Use this for initialization
	void Start () {
		audioSource = GetComponent<AudioSource> ();
		InvokeRepeating ("FireWeapon", nextFire, fireRate);
	}

	void FireWeapon()
	{
		Instantiate (shot, shotSpawn.position, shotSpawn.rotation);
		audioSource.Play ();
	}

}
