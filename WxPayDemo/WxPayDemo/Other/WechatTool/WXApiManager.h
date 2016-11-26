/**
 @author lyoniOS 2016-11-26
 
 @return 微信结果回调类
 */

#import <Foundation/Foundation.h>

@interface WXApiManager : NSObject<WXApiDelegate>

+ (instancetype)sharedManager;

@end
