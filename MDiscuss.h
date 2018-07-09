//
//  MDiscuss.h
//  CameraLiveV3App
//
//  Created by wjh on 15/6/2.
//  Copyright (c) 2015年 vgemv. All rights reserved.
//

#import "MServerBase.h"

@interface MDiscuss : MServerBase

PROPERTY_C long discussID;
/*! 直播间ID */
PROPERTY_C long roomID;
/*! 评论用户名称 */
PROPERTY NSString* discussTeminalUserName;
/*! 评论内容 */
PROPERTY NSString* discussContent;
/*! 评论级别 */
PROPERTY_C int discussLevel;
/*! 评论发表时间 */
PROPERTY NSString* createDatetime;
/*! 评论修改时间 */
PROPERTY NSString* modifyDatetime;

@end
