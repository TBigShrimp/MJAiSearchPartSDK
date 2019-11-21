//
//  NSString+DIcToJson.h
//  Pods
//
//  Created by 田明甫 on 2019/3/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (DIcToJson)
- (NSString *)jsonStringWithDict:(NSDictionary *)dict;

- (NSString*)mj_getDeviceName;
    


@end

NS_ASSUME_NONNULL_END
