//
//  Room.h
//  CameraLiveV3App
//
//  Created by wjh on 14/12/23.
//  Copyright (c) 2014年 vgemv. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MServerBase.h"
#import "MEncoderEntity.h"

#define MROOM_STATUS_WAIT   0
#define MROOM_STATUS_LIVE   1
#define MROOM_STATUS_VOD    2

/*!
 * @class
 * @abstract 直播间信息类
 */
@interface MRoom : MServerBase

PROPERTY_C BOOL isnewversion;
/*! 直播间ID */
PROPERTY_C long roomID;
/*! 直播间标题 */
PROPERTY NSString* roomTitle;
/*! 直播间描述 */
PROPERTY NSString* roomDescription;
/*! 直播间封面图片URL */
PROPERTY NSString* roomPic;
/*! 是否录像；0-直播过程录像;1-直播过程不录像 */
PROPERTY_C int isRecord;
/*! 公众版应用无需设置该属性. 是否公开 0-公开,组内可见;1-不公开*/
PROPERTY_C int isPublic;
/*! 直播间状态 */
PROPERTY_C int status;

/*! 直播间访问密码 */
PROPERTY NSString* roomPwd;
PROPERTY NSString* password;

/*! 绑定设备的设备码 */
PROPERTY NSString* deviceCode;
/*! 录像显示的排列顺序;0-倒序;1-顺序 */
PROPERTY_C int recordSort;//排序 0:倒序 1:顺序
/*! 关于直播间开始直播时间的文字描述 */
PROPERTY NSString* timeDescription;//直播时间段描述

PROPERTY_C int commendNum; // 点赞数
PROPERTY_C int playNum; // 播放数

/*! 编码器信息 */
@property(nonatomic,strong)MEncoderEntity* encoderInfo;

@end
