using UnityEngine;
using System.Collections;
using System.Collections.Generic;

//using for DllImport
using System.Runtime.InteropServices;

public class SHMain : MonoBehaviour
{
    static SHMain _instance;

#if !UNITY_EDITOR && UNITY_IOS
    [DllImport("__Internal")]
    private static extern void iOSPluginHelloWorld(string strMessage);
#endif

    void Start ()
    {
        if (null == _instance)
            _instance = this;

        UnityEngine.Debug.Log("Unity Start Function in MainScript");

#if !UNITY_EDITOR && UNITY_IOS
        iOSPluginHelloWorld("Hello~!! iOSPlugin");
#endif
    }

    public void ReciveFunction(string strLog)
    {
        UnityEngine.Debug.LogFormat("Unity ReciveFunction in MainScript({0})", strLog);
    }
}
