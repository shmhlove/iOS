using UnityEngine;
using System.Collections;

public class MyPlugInTest : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Debug.Log ("MyPlugInTest.Start() : " + MyPlugIn.MyFunction (10, 20));
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
