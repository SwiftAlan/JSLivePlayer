//
//  MRoomConnection.h
//  CameraLiveV3SDK
//
//  Created by wey on 16/2/19.
//  Copyright (c) 2016年 juns. All rights reserved.
//

#import "MServerBase.h"

@interface MRoomConnectionEntity : NSObject

PROPERTY_C long roomID;

PROPERTY_C long cs;

@end

@interface MRoomConnection : MServerBase

PROPERTY NSArray* roomCsList;

@end
