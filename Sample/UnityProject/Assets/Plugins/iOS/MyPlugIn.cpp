//
//  MyPlugIn.cpp
//  MyPlugIn
//
//  Created by 최용귀 on 2014. 7. 10..
//  Copyright (c) 2014년 WiseKids. All rights reserved.
//
#include "UnityPluginInterface.h"

#include "MyPlugIn.h"

// Prints a string
static void DebugLog (const char* str)
{
#if UNITY_WIN
	OutputDebugStringA (str);
#else
	printf ("%s\n", str);
#endif
}

extern "C" {
    int _Function1(int A, int B)
    {
        DebugLog("Native Called : _Function1");
        return A+B;
    }
}

extern "C" int EXPORT_API _Function2(int A, int B)
{
    DebugLog("Native Called : _Function2");
    return A+B;
}