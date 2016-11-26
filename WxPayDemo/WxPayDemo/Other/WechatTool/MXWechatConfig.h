//
//  MXWechatConfig.h
//  WxPayDemo
//
//  Created by 广东众网合一网络科技有限公司 on 16/11/26.
//  Copyright © 2016年 GdZwhy. All rights reserved.
//

#ifndef MXWechatConfig_h
#define MXWechatConfig_h

#import "WXApi.h"
#import "WXApiManager.h"
#import "MXWechatPayHandler.h"  //微信支付调用类
#import "MXWechatSignAdaptor.h" //微信签名工具类
#import "XMLDictionary.h"       //XML转换工具类

/**
 -----------------------------------
 微信支付需要配置的参数
 -----------------------------------
 */

// 开放平台登录https://open.weixin.qq.com的开发者中心获取APPID
#define MXWechatAPPID       @"wxbff3f84cc71554c1"
// 开放平台登录https://open.weixin.qq.com的开发者中心获取AppSecret。
#define MXWechatAPPSecret   @"e5d5a34eb45ad58b64d1bf2eef8b7122"
// 微信支付商户号
#define MXWechatMCHID       @"1380919002"
// 安全校验码（MD5）密钥，商户平台登录账户和密码登录http://pay.weixin.qq.com
// 平台设置的“API密钥”，为了安全，请设置为以数字和字母组成的32字符串。
#define MXWechatPartnerKey  @"6de04e7247f9aab635966cee181ccced"


/**
 -----------------------------------
 微信下单接口
 -----------------------------------
 */

#define kUrlWechatPay       @"https://api.mch.weixin.qq.com/pay/unifiedorder"


/**
 -----------------------------------
 统一下单请求参数键值
 -----------------------------------
 */

#define WXAPPID         @"appid"            // 应用id
#define WXMCHID         @"mch_id"           // 商户号
#define WXNONCESTR      @"nonce_str"        // 随机字符串
#define WXSIGN          @"sign"             // 签名
#define WXBODY          @"body"             // 商品描述
#define WXOUTTRADENO    @"out_trade_no"     // 商户订单号
#define WXTOTALFEE      @"total_fee"        // 总金额
#define WXEQUIPMENTIP   @"spbill_create_ip" // 终端IP
#define WXNOTIFYURL     @"notify_url"       // 通知地址
#define WXTRADETYPE     @"trade_type"       // 交易类型
#define WXPREPAYID      @"prepay_id"        // 预支付交易会话

#endif /* MXWechatConfig_h */
