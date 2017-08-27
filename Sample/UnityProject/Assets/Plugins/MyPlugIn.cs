using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

public class MyPlugIn : MonoBehaviour {

	[DllImport ("__Internal")]
	private static extern int _Function1(int a, int b);

	[DllImport ("__Internal")]
	private static extern int _Function2(int a, int b);
	
	public static int MyFunction(int a, int b)
	{
		return _Function1 (a, b) + _Function2(a, b);
	}
}
