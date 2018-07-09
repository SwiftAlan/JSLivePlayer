//
//  ServerAPI.h
//  CameraLiveV3App
//
//  Created by wjh on 15/1/1.
//  Copyright (c) 2015年 vgemv. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IServerAPI.h"


typedef enum RoomType{
    MyRoom = 1,
    GroupRoom
}RoomType;

@interface ServerAPI : NSObject<IServerAPI>

- (id)initWithServerAddress:(NSString*)address;

- (NSURL*)apiUrlWithName:(NSString*)apiName;

@end
