//
//  LiveVideoPlayer.h
//  CameraLiveV3SDK
//
//  Created by wey on 16/7/12.
//  Copyright © 2016年 juns. All rights reserved.
//

//#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayer.h>
#import "LiveRoomPlayerHelper.h"

#define LIVEVIDEOPLAYER_EVENT_LIVEWILLSTART 1
#define LIVEVIDEOPLAYER_EVENT_LIVEWILLSTOP  2
#define LIVEVIDEOPLAYER_EVENT_LIVEDIDSTART  3
#define LIVEVIDEOPLAYER_EVENT_LIVEDIDSTOP   4
#define LIVEVIDEOPLAYER_EVENT_PLAY         5
#define LIVEVIDEOPLAYER_EVENT_PAUSE         6
#define LIVEVIDEOPLAYER_EVENT_ERROR         7
#define LIVEVIDEOPLAYER_EVENT_CONTROLS_HIDD   8
#define LIVEVIDEOPLAYER_EVENT_CONTROLS_SHOW   9
#define LIVEVIDEOPLAYER_EVENT_READY   10
#define LIVEVIDEOPLAYER_EVENT_ENTER_FULLSCREEN   11
#define LIVEVIDEOPLAYER_EVENT_EXIT_FULLSCREEN   12

@interface VideoPlayer : MPMoviePlayerController

- (void)showControls:(Boolean)show;

- (void)enableDanmaku:(BOOL)enable;

@end

/*!
 @class
 */
@interface LiveVideoPlayer : VideoPlayer<LiveRoomPlayerEventCallback>

+(int)version;

-(void)ready:(long)_roomID apiServer:(NSString*)_apiServer;

-(void)ready:(long)_roomID;

-(void)sendDanmaku:(NSString*)text timestamp:(long)timestamp;

-(long)liveDuration;

-(long)recordID;

-(void)end;

-(void)setEventCallback:(id<LiveRoomPlayerEventCallback>)callback;

-(void)setAutoplay:(BOOL)_auto;

-(void)setIsLive:(BOOL)_isLive;

- (void)showPoster:(BOOL)show;
- (UIImage*)posterImage;
- (NSString*)posterImageUrl;

- (UIView*)getControllerView;

-(UIView*)get_UISnapshotView;

@end

