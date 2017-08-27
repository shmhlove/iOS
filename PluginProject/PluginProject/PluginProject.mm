//
//  PluginProject.m
//  PluginProject
//
//  Created by 이상호 on 2017. 8. 27..
//  Copyright © 2017년 이상호. All rights reserved.
//

#import "PluginProject.h"

@implementation PluginProject

@end

extern "C"
{
    void iOSPluginHelloWorld()
    {
        NSLog(@"iOSPluginHelloWorld in iOS");
        //UnitySendMessage("SHMain", "ReciveFunction", "Send To iOS");
    }
}
