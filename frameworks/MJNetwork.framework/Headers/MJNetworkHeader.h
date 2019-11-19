//
//  MJNetworkHeader.h
//  MJNetWorking
//
//  Created by 田明甫 on 2019/1/17.
//  Copyright © 2019 田明甫. All rights reserved.
//

#ifndef MJNetworkHeader_h
#define MJNetworkHeader_h


/**
 response info

 @param response   返回提
 @param isSuccess 返回码 0000 为Ture
 */
typedef void(^MJSuccessResponse)(BOOL isSuccess,id response);

/**
 responseError info

 @param error error
 */
typedef void(^MJFailureBlock)(NSError *error);


/**
 *   在Debug模式显示日志，Release模式关闭日志
 */
#ifdef DEBUG
#define DebugLog( s, ... ) printf( "<%s:(%d)> %s %s\n\n", [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] cStringUsingEncoding:NSUTF8StringEncoding], __LINE__,__func__, [[NSString stringWithFormat:(s), ##__VA_ARGS__] cStringUsingEncoding:NSUTF8StringEncoding])
#else
# define DebugLog(...);

#endif

#endif /* MJNetworkHeader_h */
