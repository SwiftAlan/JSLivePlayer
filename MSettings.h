//
//  MSettings.h
//  CameraLiveV3App
//
//  Created by wjh on 14/12/25.
//  Copyright (c) 2014年 vgemv. All rights reserved.
//

#import "LiveParameters.h"

@interface MSettings : NSObject

@property(nonatomic)LiveParameters* liveParameters;

@property(nonatomic,strong)NSString* qualityPreset;

@property(nonatomic,strong)NSDictionary* qualityPresetDic;

@property(nonatomic)int canEncodePixelPerMs;

@end
