//
//  MJNetworkTicket.h
//  MJNetWorking
//
//  Created by 田明甫 on 2019/1/18.
//  Copyright © 2019 田明甫. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MJTicket.h"

NS_ASSUME_NONNULL_BEGIN

@interface MJNetworkTicketManager : NSObject

@property(nonatomic, strong) MJTicket *mjticket;


+ (instancetype)sharedInstance;

/**
 取出票据

 @return MJTicket票据
 */
- (MJTicket *)mj_Ticket;
/**
 票据是否过期 YES有效
 */
- (BOOL)mj_AuthorizationValid;
/**
 httpsession对话是否有效
 */
- (BOOL)mj_sessionValid;

- (void)mj_exitSession;
@end


NS_ASSUME_NONNULL_END


