//
//  MJNetworkConfig.h
//  MJNetWorking
//
//  Created by 田明甫 on 2019/1/18.
//  Copyright © 2019 田明甫. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MJNetworkConfig : NSObject


+ (instancetype)sharedInstance ;

/**
 Host of request
 */
@property(nonatomic, copy)NSString *_Nonnull host;

/**
 Custom headers, default is nil
 */
@property(nonatomic ,strong)NSString *_Nullable tokenHeader;

/**
 Base url of requests, default is nil
 */
@property(nonatomic, copy) NSString *_Nonnull baseUrl;

/**
 Request timeout seconds,default is 15(unit is second)
 */
@property(nonatomic, assign) NSTimeInterval timeoutSeconds;

/**
 Request common params 明觉用户唯一id
 */
@property(nonatomic, copy)NSString *_Nonnull mjUserId;

/**
 Request common params  车e赔:A0101 I0101 W0101
 一车一件:A0201 I0201 W0201
 */
@property(nonatomic, copy)NSString *_Nonnull productCode;

/**
 国际化语言参数 默认简体中文
 */
@property(nonatomic, copy)NSString *_Nonnull language;

/**
 Request common params 业务数据参数
 */
@property(nonatomic, copy)NSString *_Nullable version;

/**
 Request common params  客户端此次请求的唯一id，生成规则，mjUserId_时间戳
 */
@property(nonatomic, copy)NSString *_Nullable customTraceId;


@end

NS_ASSUME_NONNULL_END
