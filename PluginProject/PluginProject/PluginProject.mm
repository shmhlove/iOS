//
//  PluginProject.m
//  PluginProject
//
//  Created by 이상호 on 2017. 8. 27..
//  Copyright © 2017년 이상호. All rights reserved.
//

#import "PluginProject.h"
#import "UnityBridge.h"
#import "NcLog.h"

FOUNDATION_EXPORT
void iOSPluginHelloWorld(const char *strMessage)
{
    NcLogD(@"iOSPluginHelloWorld in iOS");
    
#if !(TARGET_IPHONE_SIMULATOR)
    UnitySendMessage("SHMain", "ReciveFunction", strMessage);
#endif
}
