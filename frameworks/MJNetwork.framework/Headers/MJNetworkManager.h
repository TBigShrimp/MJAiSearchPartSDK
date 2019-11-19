//
//  MJNetworkManager.h
//  MJNetWorking
//
//  Created by 田明甫 on 2019/1/17.
//  Copyright © 2019 田明甫. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MJNetworkHeader.h"

NS_ASSUME_NONNULL_BEGIN


@protocol AuthenticationInvalidProtocol <NSObject>
@optional

/**
 票据过期 根据业务跳转 一般跳转登录页面
 */
- (void)authenticationInvalid;

@end

@interface MJNetworkManager : NSObject


@property(nonatomic, weak) id<AuthenticationInvalidProtocol> authenticationInvalidDelegate;

+ (instancetype)sharedInstance;


/**
 网络状态 NetworkReachabilityStatus
 */
@property(nonatomic, copy)NSString *mjNetworkNetworkReachabilityStatus;


/**
 网络状态是否可用

 @return
 */
- (BOOL)networkAvaiable;

/**
 鉴权（登录、SDK鉴权）使用
 */
- (void)authenticationURL:(NSString *)url parameters:(id)parameters success:(MJSuccessResponse)success failure:(MJFailureBlock)failure;

/**
 如果MJTicket AccessToken 存在可以刷新登录状态
 */
- (void)refreshToken:(void(^)(BOOL refeshSuccess ,id refrshResult))refeshSuccess ;

- (void)getWithURL:(NSString *)url parameters:(id)parameters authentication:(NSString *)token success:(MJSuccessResponse)success failure:(MJFailureBlock)failure;

- (void)postWithURL:(NSString *)url parameters:(id)parameters authentication:(NSString *)token success:(MJSuccessResponse)success failure:(MJFailureBlock)failure;


@end

NS_ASSUME_NONNULL_END
