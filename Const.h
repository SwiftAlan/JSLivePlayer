//
//  Const.h
//  CameraLiveV3SDK
//
//  Created by wey on 16/3/10.
//  Copyright (c) 2016年 juns. All rights reserved.
//

#ifndef CameraLiveV3SDK_Const_h
#define CameraLiveV3SDK_Const_h

#define ServiceResult_Succed                0
#define ServiceResult_Error                 1
#define ServiceResult_NoLogin               2
#define ServiceResult_LoginOffline          3
#define ServiceResult_Redo                  4
#define ServiceResult_Unknow                5
#define ServiceResult_DataNotFound          6
#define ServiceResult_PricePackageTimeout   7
#define ServiceResult_IpAddressNotFound     8
#define ServiceResult_Busy                  9
#define ServiceResult_RoomIsNoPublic        10
#define ServiceResult_RoomPwdError          11
#define ServiceResult_TimeFormatError       12
#define ServiceResult_UploadFormatError     13
#define ServiceResult_HardEncoderNotFound   14
#define ServiceResult_WatchFull             15

#define RoomStatus_Wait 0
#define RoomStatus_Live 1
#define RoomStatus_Vod  2

#define PlayType_Live   1
#define PlayType_Vod    2

#define TryFlag_Try         0
#define TryFlag_Public      1
#define TryFlag_NetworkTest 2

#define RoomStatusTypeFlag_LiveStatus   1
#define RoomStatusTypeFlag_CommendNum   2
#define RoomStatusTypeFlag_PlayNum      4
#define RoomStatusTypeFlag_Comment      8

#define RecordSort_Desc 0//0 倒序
#define RecordSort_Asc  1//1 顺序

//设备类型 0:编码器 1:摄像头
#define DeviceType_Encoder  0
#define DeviceType_Camera   1

#define PushType_Active     0
#define PushType_Passive    1
#define PushType_Idle       2

#define EncoderStatus_Disconnect    0
#define EncoderStatus_Standby       1
#define EncoderStatus_StartPush     2
#define EncoderStatus_Streaming     3
#define EncoderStatus_Error         4
#define EncoderStatus_Stop          5

#define StreamType_Rtmp 0
#define StreamType_Hls  1
#define StreamType_Rtsp 2


#endif
