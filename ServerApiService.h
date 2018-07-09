//
//  ServerApiService.h
//  CameraLiveV3SDK
//
//  Created by wey on 16/2/29.
//  Copyright (c) 2016年 juns. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IServerAPI.h"

@interface ServerApiService : NSObject

- (id)initWithServerAPI:(id<IServerAPI>)api;

- (void)setAccountWithUserCode:(NSString*)userCode userPsw:(NSString*)userPsw;

- (NSString*)getUserCode;

- (NSString*)getUserPsw;

- (void)setNotifyCallback:(void(^)(NSString* event,id data))callback;

//- (void)login:(void(^)(NSDictionary* ret))success error:(void(^)(NSError*))error;

- (void)loginWithUserCode:(NSString*)userCode password:(NSString*)password success:(void(^)(NSDictionary* ret))success error:(void(^)(NSError*))error;

- (void)invokeService:(NSString*)apiName param:(NSDictionary*)param success:(void(^)(id))success error:(void(^)(NSError*))error;

@end
