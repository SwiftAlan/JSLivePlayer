//
//  ServerApiWarpper.h
//  CameraLiveV3App
//
//  Created by wjh on 15/1/3.
//  Copyright (c) 2015年 vgemv. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ServerAPI.h"
#import "Models.h"
#import "IServerAPI.h"
#import "ServerApiService.h"

NS_ENUM(Byte, ThirdLoginType) {
    LoginType_WX = 0,
    LoginType_QQ = 1
};

/*!
 @class 
 @abstract 服务端接口类
 @discussion 通过本类调用服务端API接口。
 */

@interface ServerApiController : ServerApiService

-(id)initWithServerAPI:(id<IServerAPI>)api;

-(void)invokeService2:(NSString *)apiName param:(NSDictionary *)param success:(void (^)(NSDictionary *))success error:(void (^)(NSError *))error;

#pragma mark - user -

-(void) thirdLogin:(enum ThirdLoginType) loginType code:(NSString*)code inviteCode:(NSString*)inviteCode
           success:(void(^)(int result))success
             error:(void(^)(NSError*))error;

/*!
 @method
 @abstract 退出登录
 */
-(void)logout:(void(^)(void))success error:(void(^)(NSError*))error;

/*!
 @method
 @abstract 获取已登录用户信息
 */
-(void)getTerminalUserInfo:(void(^)(MUserInfo*))success error:(void(^)(NSError*))error;



-(void)userRegister:(NSString*)userCode
           username:(NSString*)username
             passwd:(NSString*)passwd
          cellPhone:(NSString*)cellPhone
              email:(NSString*)email
                 qq:(NSString*)qq
            captcha:(NSString*)captcha
         inviteCode:(NSString*)inviteCode
            success:(void(^)(int result,NSString* resultMsg))success
              error:(void(^)(NSError*))error;


/*!
 @method
 @abstract 用户注册
 @param captcha （暂不使用，传空字符串）
 @param inviteCode 手机验证码
 */
-(void)userRegister:(NSString*)userCode
           username:(NSString*)username
             passwd:(NSString*)passwd
          cellPhone:(NSString*)cellPhone
              email:(NSString*)email
                 qq:(NSString*)qq
            captcha:(NSString*)captcha
         inviteCode:(NSString*)inviteCode
       validateCode:(NSString*)validateCode
            success:(void(^)(int result,NSString* resultMsg))success
              error:(void(^)(NSError*))error;

//-(void)getCapcha:(void(^)(UIImage*))success error:(void(^)(NSError*))error;

/*!
 @method
 @abstract 发送手机验证码
 */
-(void)registerValidateCode:(NSString*)cellPhone
                    success:(void(^)(int result))success
                      error:(void(^)(NSError*))error;

#pragma mark - ROOM -
/*!
 @method
 @abstract 创建直播间
 */
-(void) createLiveRoom:(MRoom*)room
              success:(void(^)(long roomID))success
                error:(void(^)(NSError*))error;
/*!
 @method
 @abstract 修改直播间
 */
-(void) updateLiveRoom:(MRoom*)room
              success:(void(^)(void))success
                error:(void(^)(NSError*))error;
/*!
 @method
 @abstract 删除直播间
 */
-(void) deleteLiveRoom:(long)roomID
              success:(void(^)(void))success
                error:(void(^)(NSError*))error;
/*!
 @method
 @abstract 获取直播间
 */
-(void) getLiveRoom:(long)roomID
            success:(void(^)(MRoomWithLive* room))success
              error:(void(^)(NSError*))error;
/*!
 @method
 @abstract 获取直播间列表
 */
-(void) listLiveRoom:(int)type pagenum:(int)pagenum pagesize:(int)pagesize
            success:(void(^)(NSArray* list))success
              error:(void(^)(NSError*))error;
/*!
 @method
 @abstract 获取直播间当前连接数（正在播放的用户数）
 */
-(void) getRoomConnection:(NSArray*)roomIDs
                 success:(void(^)(MRoomConnection*))success
                   error:(void(^)(NSError*))error;

#pragma mark - ROOM_EX -
/*!
 @method
 @abstract 为直播记录上传截图
 */
-(void) uploadPic:(long)roomID liveID:(long)liveID picFile:(NSData*)picFile
         success:(void(^)(void))success
           error:(void(^)(NSError*))error;

/*!
 @method
 @abstract 开始编码器直播
 */
-(void) startEncoder:(long)roomID
             success:(void(^)(int encoderStatus))success
               error:(void(^)(NSError*))error;
/*!
 @method
 @abstract 停止编码器直播
 */
-(void) stopEncoder:(long)roomID
            success:(void(^)(int encoderStatus))success
              error:(void(^)(NSError*))error;

#pragma mark - RECORD -
/*!
 @method
 @abstract 删除直播记录
 */
-(void) deleteLive:(long)liveID
          success:(void(^)(void))success
            error:(void(^)(NSError*))error;
/*!
 @method
 @abstract 修改直播记录名称与排序
 @param sort 排序号
 */
-(void) updateRecord:(long)recordID
          recordName:(NSString*)recordName
                sort:(int)sort
             success:(void(^)(void))success
               error:(void(^)(NSError*))error;
/*!
 @method
 @abstract 修改直播机记录排序
 @param sort 排序号，此方法会插入式的修改排序号（如sort传2，原来排序号为2的录像回修改为排序号3）
 */
-(void) updateRecordSort:(long)recordID
                    sort:(int)sort
                 success:(void(^)(void))success
                   error:(void(^)(NSError*))error;

#pragma mark - PLAY -
/*!
 @method
 @abstract 获取播放地址
 @param roomID 直播间ID
 @param liveID 直播ID
 @param playType 播放地址类型 1：直播  2：录像
 */
-(void) playAddress:(long)roomID liveID:(long)liveID playType:(int)playType
           success:(void(^)(NSString* rtmp,NSString* rtsp,NSString* hls))success
             error:(void(^)(NSError*))error;
/*!
 @method
 @abstract 获取自上次调用本API以来，直播间的状态变化（直播状态，评论数，点赞数）
 */
-(void) getStatusSign:(long)roomID
              success:(void(^)(MRoomStatusSign* sign))success
                error:(void(^)(NSError*))error;
/*!
 @method
 @abstract 获取自 time 以来，直播间的状态变化
 */
-(void) getStatusSignWithTime:(NSDate*)time
                       roomID:(long)roomID
                      success:(void(^)(MRoomStatusSign* sign))success
                        error:(void(^)(NSError*))error;

#pragma mark - DISCUSS -
/*!
 @method
 @abstract 发送评论
 */
-(void) createLiveRoomDiscuss:(long)roomID discussContent:(NSString*)discussContent discussLevel:(int)discussLevel
                      success:(void(^)(void))success
                        error:(void(^)(NSError*))error;
/*!
 @method
 @abstract 获取评论
 */
-(void) listLiveRoomDiscuss:(long)roomID pagenum:(int)pagenum pagesize:(int)pagesize
                    success:(void(^)(NSArray* list))success
                      error:(void(^)(NSError*))error;
/*!
 @method
 @abstract 删除评论
 */
-(void) deleteLiveRoomDiscuss:(long)discussID
                      success:(void(^)(void))success
                        error:(void(^)(NSError*))error;

#pragma mark - UTIL -
/*!
 @method
 @abstract 检测是否有版本更新
 */
-(void) checkVersion:
(void(^)(int versionCode,NSString* versionName,NSString* path,int forceFlag,NSString* memo))success
              error:(void(^)(NSError*))error;

-(void) checkShareTextTemplate:(BOOL)withContent
                      success:(void(^)(NSDate* latestUpdateTime,NSString* shareTextTemplate))success
                        error:(void(^)(NSError*))error;
/*!
 @method
 @abstract 获取直播间的播放网页地址
 */
-(NSString*) getPublicPlayUrl:(long)roomID;

-(void) notice:(void(^)(NSDictionary* ret))success error:(void(^)(NSError*))error;

-(void) agentInfo:(void(^)(NSDictionary* ret))success error:(void(^)(NSError*))error;

//
//
//


@end
