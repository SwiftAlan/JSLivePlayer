//
//  LiveRoomPlayerHelper.h
//  CameraLiveV3SDK
//
//  Created by wey on 16/3/9.
//  Copyright (c) 2016年 juns. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ServerApiController.h"

#define LiveRoomPlayerEvent_NeedPassword        0
#define LiveRoomPlayerEvent_RoomInfo            1
#define LiveRoomPlayerEvent_LiveStart           2
#define LiveRoomPlayerEvent_LiveStop            3
#define LiveRoomPlayerEvent_PlayCountChange     4
#define LiveRoomPlayerEvent_CommendCountChange  5
#define LiveRoomPlayerEvent_NewComment          6
#define LiveRoomPlayerEvent_VodStatus           7
#define LiveRoomPlayerEvent_RoomPic             8

#define VodStatus_Live  0
#define VodStatus_On    1
#define VodStatus_Off   2

@protocol LiveRoomPlayerEventCallback
-(BOOL)onLiveRoomPlayerEvent:(int)event data:(id)data;
@end

@interface LiveRoomPlayerHelper : NSObject

-(id)initWithRoomID:(long)_roomID api:(ServerApiController*)_api;

-(void)setEventCallback:(id<LiveRoomPlayerEventCallback>)callback;

-(void)startPoolingWithDurationSec:(int)poolingDurationSec stopOnLiveStart:(BOOL) _stopPoolingOnLiveStart;

-(void)startPooling;

-(void)stopPooling;

-(BOOL)isPooling;

@end
