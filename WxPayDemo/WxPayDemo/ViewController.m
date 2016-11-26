//
//  ViewController.m
//  WxPayDemo
//
//  Created by 众网合一 on 16/6/14.
//  Copyright © 2016年 GdZwhy. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    //发起微信支付
    [MXWechatPayHandler jumpToWxPay];
}


@end
