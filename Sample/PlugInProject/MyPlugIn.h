//
//  MyPlugIn.h
//  MyPlugIn
//
//  Created by 최용귀 on 2014. 7. 10..
//  Copyright (c) 2014년 WiseKids. All rights reserved.
//

#ifndef __MyPlugIn__MyPlugIn__
#define __MyPlugIn__MyPlugIn__

#include <iostream>

static void DebugLog (const char* str);

extern "C" int EXPORT_API _Function1(int A, int B);
extern "C" int EXPORT_API _Function2(int A, int B);

#endif /* defined(__MyPlugIn__MyPlugIn__) */
