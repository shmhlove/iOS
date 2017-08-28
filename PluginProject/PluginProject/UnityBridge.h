#import <Foundation/Foundation.h>

#if !(TARGET_IPHONE_SIMULATOR)
FOUNDATION_EXPORT
void UnitySendMessage(const char* obj, const char* method, const char* msg);
#endif
