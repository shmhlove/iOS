//
//  NcLog.m
//  NcMopSdk
//
//  Created by jhbhang on 2015. 7. 10..
//  Copyright (c) 2015년 NCSoft. All rights reserved.
//

#import "NcLog.h"

@implementation NcLog

+ (void)error:(NSString *)formatString, ...{
    va_list args;
    va_start(args, formatString);
    NSLog(@"%@", [[NSString alloc] initWithFormat:formatString arguments:args]);
    va_end(args);
}

+ (void)debug:(NSString *)formatString, ...{
    
    va_list args;
    va_start(args, formatString);
    NSLog(@"%@", [[NSString alloc] initWithFormat:formatString arguments:args]);
    va_end(args);
}

+ (void)info:(NSString *)formatString, ...{
    va_list args;
    va_start(args, formatString);
    NSLog(@"%@", [[NSString alloc] initWithFormat:formatString arguments:args]);
    va_end(args);
}

+ (void)warning:(NSString *)formatString, ...{
    va_list args;
    va_start(args, formatString);
    NSLog(@"%@", [[NSString alloc] initWithFormat:formatString arguments:args]);
    va_end(args);
}
@end
