//
//  AppDelegate.m
//  WxPayDemo
//
//  Created by 众网合一 on 16/6/14.
//  Copyright © 2016年 GdZwhy. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    //注册微信支付
    [WXApi registerApp:MXWechatAPPID withDescription:@"微信支付"];
    
    return YES;
}

#pragma mark - 微信支付回调

- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url
{
    return  [WXApi handleOpenURL:url delegate:[WXApiManager sharedManager]];
}

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation
{
    return [WXApi handleOpenURL:url delegate:[WXApiManager sharedManager]];
}

// NOTE: 9.0以后使用新API接口
- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options
{
    return [WXApi handleOpenURL:url delegate:[WXApiManager sharedManager]];
}


@end
