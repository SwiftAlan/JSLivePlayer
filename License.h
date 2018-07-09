//
//  License.h
//  CameraLiveV3
//
//  Created by wjh on 15/1/8.
//  Copyright (c) 2015年 vgemv. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface License : NSObject

+(BOOL) setLicense:(NSString*)l;
+(BOOL) check;
+(void) checkExpired:(BOOL)a;
+(BOOL) licenseExpired;

@end
