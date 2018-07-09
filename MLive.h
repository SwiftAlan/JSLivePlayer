//
//  MLive.h
//  CameraLiveV3App
//
//  Created by wjh on 15/1/3.
//  Copyright (c) 2015年 vgemv. All rights reserved.
//

#import "MServerBase.h"

#define MLIVE_STATUS_START 0
#define MLIVE_STATUS_STREAMING 1
#define MLIVE_STATUS_END 2
#define MLIVE_STATUS_END_TIMEOUT 3
#define MLIVE_STATUS_END_NODATA 4

#define MLIVE_TRYFLAG_PUBLISH SERVER_NO
#define MLIVE_TRYFLAG_TEST SERVER_YES
#define MLIVE_TRYFLAG_NETWORK_TEST 2

@interface MLive : MServerBase

/*! 录像ID */
PROPERTY_C long liveID;
/*! 录像名称 */
PROPERTY NSString* liveName;
/*! 排序数 */
PROPERTY_C int sort;
/*! 录像状态 */
PROPERTY_C int liveStatus;
PROPERTY_C int tryFlag;//0 for publish,1 for test
/*! 录像预览图 */
PROPERTY NSString* livePic;
/*! 录像开始时间 */
PROPERTY NSDate* beginTime;
/*! 录像结束时间 */
PROPERTY NSDate* endTime;

/*! 音频码率 */
PROPERTY_C int audioBitrate;
/*! 音频声道数 */
PROPERTY_C int audioChannelCount;
/*! 音频格式 */
PROPERTY_C int audioFormat;
/*! 音频采样率 */
PROPERTY_C int audioSampleRate;
/*! 视频码率 */
PROPERTY_C int videoBitrate;
/*! 视频*/
PROPERTY NSString* videoDimension;
/*! 视频帧率 */
PROPERTY_C int videoFPS;
/*! 视频格式 */
PROPERTY_C int videoFormat;

@end
