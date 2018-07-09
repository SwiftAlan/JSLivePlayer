//
//  MServerBase.h
//  CameraLiveV3App
//
//  Created by wjh on 15/1/3.
//  Copyright (c) 2015年 vgemv. All rights reserved.
//

#import "ModelBase.h"

#define SERVER_YES 0
#define SERVER_NO 1

#define M_PLAYADDRESS_TYPE_LIVE 1
#define M_PLAYADDRESS_TYPE_VOD 2
@interface MServerBase : ModelBase

PROPERTY NSString* userCode;

PROPERTY NSString* validCode;

@end
