//
//  Singleton.h
//  CameraLiveV3App
//
//  Created by wjh on 15/1/1.
//  Copyright (c) 2015年 vgemv. All rights reserved.
//

#import <Foundation/Foundation.h>

#define SYNTHESIZE_SINGLETON_FOR_HEADER(className) \
\
+ (className *)sharedInstance;

#define SYNTHESIZE_SINGLETON_FOR_CLASS(className) \
\
+ (className *)sharedInstance { \
static className *shared##className = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
shared##className = [[self alloc] init]; \
}); \
return shared##className; \
}

@interface Singleton : NSObject

//+ (instancetype)sharedInstance;

@end
