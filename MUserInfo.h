//
//  MUserInfo.h
//  CameraLiveV3App
//
//  Created by wjh on 15/1/3.
//  Copyright (c) 2015年 vgemv. All rights reserved.
//

#import "MServerBase.h"

#define MUSERINFO_BILLTYPE_NONE 0
#define MUSERINFO_BILLTYPE_PLANE 1
#define MUSERINFO_BILLTYPE_PACK 2

@interface MUserInfo : MServerBase

PROPERTY NSString* userCode;
PROPERTY NSString* userName;
PROPERTY NSString* phone;
PROPERTY NSString* email;
PROPERTY NSString* qqNum;
PROPERTY_C int userGroupCount;
PROPERTY_C int userPoint;
PROPERTY_C int liveDuration;
PROPERTY_C int liveBillType;						// 直播计费方式 0:未购买	1:小时	2：月
PROPERTY_C int liveConcurrency;					// 直播并发数
PROPERTY_C int liveBillNum;
PROPERTY NSDate* livePricePackageBeginDatetime;	// 直播套餐开始时间
PROPERTY NSDate* livePricePackageEndDatetime;		// 直播套餐到期时间
PROPERTY_C long recordValidDatatime;				// 录像有效期
PROPERTY_C long recordBillNum;						//录像计费剩余量;

@end
