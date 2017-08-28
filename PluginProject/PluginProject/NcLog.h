//
//  NcLog.h
//  NcMopSdk
//
//  Created by jhbhang on 2015. 7. 10..
//  Copyright (c) 2015년 NCSoft. All rights reserved.
//

#import <Foundation/Foundation.h>

#define NcLogWLite(fmt, ...) [NcLog warning:@"[MOP]<WARNING>: [Line:%d] " fmt, __LINE__, ##__VA_ARGS__]
#define NcLogELite(fmt, ...) [NcLog error:@"[MOP]<ERROR>: [Line:%d] " fmt, __LINE__, ##__VA_ARGS__]

#define NcLogE(fmt, ...) [NcLog error:@"[MOP]<ERROR>: %s[Line:%d] " fmt, [NSStringFromClass([self class]) UTF8String], __LINE__, ##__VA_ARGS__]

#define NcLogD(fmt, ...) [NcLog debug:@"[MOP]<DEBUG>: %s[Line:%d] " fmt, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__]

#define NcLogI(fmt, ...) [NcLog info:@"[MOP]<INFO>: " fmt, ##__VA_ARGS__]

#define NcLogW(fmt, ...) [NcLog warning:@"[MOP]<WARNING>: %s[Line:%d] " fmt, [NSStringFromClass([self class]) UTF8String], __LINE__, ##__VA_ARGS__]

#define NcLogVoid() NcLogD(@"Called")

#define NcLogCString1(p) NcLogWLite(@#p @" = %s", (p))
#define NcLogCString2(p1, p2) NcLogWLite(@#p1 @" = %s," @#p2 @" = %s", (p1), (p2))
#define NcLogCString3(p1, p2, p3) NcLogWLite(@#p1 @" = %s," @#p2 @" = %s," @#p3 @" = %s", (p1), (p2), (p3))

#define NcLogNSObject(p) NcLogWLite(@#p @" = %@", p)


@interface NcLog : NSObject

+ (void)error:(NSString *)formatString, ...;

+ (void)debug:(NSString *)formatString, ...;

+ (void)info:(NSString *)formatString, ...;

+ (void)warning:(NSString *)formatString, ...;

@end
