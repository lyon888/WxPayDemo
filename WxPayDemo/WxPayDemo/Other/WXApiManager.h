//
//  WXApiManager.h
//  SDKSample
//
//  Created by Jeason on 16/07/2015.
//
//

#import <Foundation/Foundation.h>
#import "WXApi.h"

@interface WXApiManager : NSObject<WXApiDelegate>

+ (instancetype)sharedManager;

@end
