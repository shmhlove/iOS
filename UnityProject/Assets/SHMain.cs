using UnityEngine;
using System.Collections;
using System.Collections.Generic;

//using for DllImport
using System.Runtime.InteropServices;

public class SHMain : MonoBehaviour
{
#if !UNITY_EDITOR && UNITY_IOS
    [DllImport("__Internal")]
    private static extern void iOSPluginHelloWorld(string strMessage);
#endif

    void Start ()
    {
        UnityEngine.Debug.Log("Unity Start Function in MainScript");

#if !UNITY_EDITOR && UNITY_IOS
        iOSPluginHelloWorld("Hello~!! iOSPlugin");
#endif
    }
}
