//
//  MLog.h
//  CameraLiveV3
//
//  Created by wjh on 15/1/15.
//  Copyright (c) 2015年 vgemv. All rights reserved.
//

#import <Foundation/Foundation.h>

#define MLOG_DEBUG    6
#define MLOG_VERBOSE  5
#define MLOG_INFO     4
#define MLOG_WARN     3
#define MLOG_ERROR    2
#define MLOG_FATAL    1

#define NSMLog(l,...) [[MLog sharedInstance]MLog:MLOG_INFO fmt:l,##__VA_ARGS__]

#define NSMLog2(level,l,...) [[MLog sharedInstance]MLog:level fmt:l,##__VA_ARGS__]

#define NSMLogd(l,...) [[MLog sharedInstance]MLog:MLOG_DEBUG fmt:l,##__VA_ARGS__]
#define NSMLogv(l,...) [[MLog sharedInstance]MLog:MLOG_VERBOSE fmt:l,##__VA_ARGS__]
#define NSMLogi(l,...) [[MLog sharedInstance]MLog:MLOG_INFO fmt:l,##__VA_ARGS__]
#define NSMLogw(l,...) [[MLog sharedInstance]MLog:MLOG_WARN fmt:l,##__VA_ARGS__]
#define NSMLoge(l,...) [[MLog sharedInstance]MLog:MLOG_ERROR fmt:l,##__VA_ARGS__]
#define NSMLogf(l,...) [[MLog sharedInstance]MLog:MLOG_FATAL fmt:l,##__VA_ARGS__]

@interface MLog : NSObject

+(MLog*)sharedInstance;

-(void)MLog:(int)level fmt:(NSString*)fmt,...;

-(void)setMLogLevel:(int)level;

-(int)logLevel;

-(void)setOnMLogTarget:(id)target action:(SEL)action;

@end
