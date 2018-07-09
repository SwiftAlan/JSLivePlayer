//
//  MRoomStatusSign.h
//  CameraLiveV3SDK
//
//  Created by wey on 16/1/25.
//  Copyright (c) 2016年 juns. All rights reserved.
//

#import "MServerBase.h"

@interface MRoomStatusSign : MServerBase

/*! 有效类型标记 */
PROPERTY_C int type;
/*! 标记更新时间 */
PROPERTY NSString* activityTime;
/*! 直播状态 */
PROPERTY_C int liveStatus;
/*! 点赞数 */
PROPERTY_C int commendNum;
/*! 播放数 */
PROPERTY_C int playCount;

@end
