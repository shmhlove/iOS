//
//  iOSPluginProject.mm
//  iOSPluginProject
//
//  Created by 이상호 on 2017. 8. 26..
//  Copyright © 2017년 이상호. All rights reserved.
//

/*
#import "iOSPluginProject.h"

@implementation iOSPluginProject

@end
*/

extern "C"
{
    void iOSPluginHelloWorld(const char* strMessage)
    {
        NSLog(@"iOS Function %@", strMessage);
        UnitySendMessage("SHMain", "ReciveFunction", strMessage);
    }
}
