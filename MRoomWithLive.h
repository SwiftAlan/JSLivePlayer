//
//  MRoomWithLive.h
//  CameraLiveV3App
//
//  Created by wjh on 15/1/8.
//  Copyright (c) 2015年 vgemv. All rights reserved.
//

#import "MRoom.h"
/*!
 @class
 @abstract 包含录像列表的直播间信息类
 @superclass MRoom
 */
@interface MRoomWithLive : MRoom
/*! 直播间录像列表 */
@property(nonatomic,strong)NSArray* lives;

@end
