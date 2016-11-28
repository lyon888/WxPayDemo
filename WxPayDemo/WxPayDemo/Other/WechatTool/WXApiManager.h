
/**
 @@create by 刘智援 2016-11-28
 
 @简书地址:    http://www.jianshu.com/users/0714484ea84f/latest_articles
 @Github地址: https://github.com/lyoniOS
 @return WXApiManager（微信结果回调类）
 */

#import <Foundation/Foundation.h>

@interface WXApiManager : NSObject<WXApiDelegate>

+ (instancetype)sharedManager;

@end
