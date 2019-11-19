//
//  MJTicket.h
//  MJNetWorking
//
//  Created by 田明甫 on 2019/1/18.
//  Copyright © 2019 田明甫. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MJTicket : NSObject

@property(nonatomic, copy)NSString *accessToken;
@property(nonatomic, copy)NSString *expiresIn;
@property(nonatomic, copy)NSString *tokenType;
@property(nonatomic, copy)NSString *UUID;

/**
 登录或刷新时保存请求时间
 每次获取到token时，保存当前时间
 */
@property (nonatomic,strong) NSDate *saveTokenTime;

@end

NS_ASSUME_NONNULL_END
