//
//  IServerAPI.h
//  CameraLiveV3SDK
//
//  Created by wey on 16/2/29.
//  Copyright (c) 2016年 juns. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol IServerAPI <NSObject>

- (NSURL*)apiUrlWithName:(NSString*)apiName;

@end
