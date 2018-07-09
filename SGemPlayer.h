//
//  SGemPlayer.h
//  CameraLiveV3SDK
//
//  Created by 杨 翊平 on 15/12/1.
//  Copyright © 2015年 juns. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Singleton.h"

/*! 播放 */
#define PLAYER_EVENT_PLAY @"play"
/*! 停止 */
#define PLAYER_EVENT_STOP @"stop"
/*! 暂停 */
#define PLAYER_EVENT_PAUSE @"pause"
/*! 恢复 */
#define PLAYER_EVENT_RESUME @"resume"
/*! 缓冲 */
#define PLAYER_EVENT_BUFFER @"buffer"
/*! 缓冲完成 */
#define PLAYER_EVENT_BUFFER_FIN @"buffer_finish"
/*! 授权失败 */
#define EVENT_LICENSE_INVALID @"licenseinvalid"
/*! 授权过期 */
#define EVENT_LICENSE_EXPIRED @"licenseexpired"
/*! 播放错误 */
#define PLAYER_EVENT_ERROR @"error"

@interface SGemPlayer : Singleton

SYNTHESIZE_SINGLETON_FOR_HEADER(SGemPlayer)

/*!
 @method
 @abstract 配置播放器
 @discussion
 @param view 显示视频的uiview控件
 @result YES如果配置成功，否则NO
 */
- (Boolean) setup:(UIView*)view;

/*!
 @method
 @abstract 设置授权串
 @discussion
 @param license 授权串
 @result YES如果授权验证通过，否则NO
 */
-(BOOL)setLicense:(NSString*)license;

/*!
 @method
 @abstract 配置播放器
 @discussion
 @param license 授权串
 @param view 显示视频的uiview空间
 @result YES如果配置成功，否则NO
 */
-(BOOL) setup:(NSString*)license andView:(UIView*)view;

/*!
 @method
 @abstract 设置播放器事件通知回调
 @discussion 本头文件已定义了事件常量，事件包含：<br>
 licenseinvalid	授权失败<br>
 licenseexpired	授权失效<br>
 play		开始播放<br>
 stop		停止播放<br>
 pause		暂停播放<br>
 resume     恢复播放<br>
 buffer		缓冲<br>
 buffer_finish			缓存完成<br>
 error			发生错误<br>
 @param target 通知对象
 @param action 通知回调，定义为action:(NSString*)eventName eventData:(id)data
 @result
 */
- (void) setEventTarget:(id)target action:(SEL)action;

/*!
 @method
 @abstract log redirect target
 @discussion
 @param
 @result
 */
- (void) setLogTarget:(id)target action:(SEL)action;

/*!
 @method
 @abstract 1~6 fatal,error,warn,info,verbose,debug
 @discussion
 @param
 @result
 */
- (void) setLogLevel:(int)level;


/*!
 @method
 @abstract 静音
 @discussion
 @result
 */
- (void) mute;

/*!
 @method
 @abstract 关闭静音
 @discussion
 @result
 */
- (void) unmute;

/*!
 @method
 @abstract 播放视频
 @discussion
 @param url 视频地址，可以是网络视频或本地视频
 @result
 */
- (void) play:(NSString*) url;

/*!
 @method
 @abstract 播放上一次调用 play：url 的视频地址
 @discussion
 @result
 */
- (void) play;

/*!
 @method
 @abstract 停止播放
 @discussion
 @result
 */
- (void) stop;

/*!
 @method
 @abstract 暂停播放
 @discussion
 @result
 */
- (void) pause;

/*!
 @method
 @abstract 恢复播放，从pause暂停处继续播放
 @discussion
 @result
 */
- (void) resume;

/*!
 @method
 @abstract 转跳到总时长乘以percentage处播放
 @discussion
 @param percentage 取值范围 0-1.0
 @result
 */
- (void) seek:(float) percentage;

/*!
 @method
 @abstract 获取视频总时长
 @discussion
 @result 视频总时长 秒数
 */
- (int) totalDuration;

/*!
 @method
 @abstract 获取当前视频播放到时刻
 @discussion
 @result 当前播放时刻 秒数
 */
- (int) currentDuration;

/*!
 @method
 @abstract 获取当前是否有视频播放中
 @discussion
 @result 播放中返回 YES，否则返回 NO
 */
- (Boolean) isPlaying;

/*!
 @method
 @abstract 获取当前是否有视频暂停播放中
 @discussion
 @result 有视频暂停播放中返回 YES，否则返回 NO
 */
- (Boolean) isPause;

/*!
 @method
 @abstract 释放播放器
 @discussion
 @result 成功完成 返回 YES，否则返回 NO
 */
- (Boolean) unsetup;

/*!
 @method
 @abstract 设置播放器滤镜字符串
 @discussion
 @result
 */
- (void) setVideoFilter:(NSString*) filterStr;

/*!
 @method
 @abstract 设置特殊参数
 @discussion
 @result
 */
- (void) setFlags:(NSString*) flags;

/*!
 @method
 @abstract 设置缓冲时间（毫秒）
 @discussion
 @result
 */
- (void) setBufferTimeMs:(int) ms;

@end
