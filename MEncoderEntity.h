//
//  EncoderEntity.h
//  CameraLiveV3SDK
//
//  Created by wey on 16/1/25.
//  Copyright (c) 2016年 juns. All rights reserved.
//

#import "MServerBase.h"

@interface MEncoderEntity : MServerBase

/*! 设备编码 */
PROPERTY NSString* deviceCode;//编码
/*! 设备类型 0-编码器;1-摄像头 */
PROPERTY_C int deviceType;//设备类型 0:编码器 1:摄像头
/*! 推流类型 0-主动;1-被动;2-按需 */
PROPERTY_C int pushType;//推流类型 0:主动 1:被动 2:按需
/*! 运行状态 */
PROPERTY_C int runStatus;//运行状态

@end
