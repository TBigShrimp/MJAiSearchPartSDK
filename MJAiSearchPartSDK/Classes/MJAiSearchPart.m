//
//  MJAiSearchPart.m
//  MJAiSearchPartSDK
//
//  Created by 田明甫 on 2019/11/19.
//

#import "MJAiSearchPart.h"
#import <MJNetwork/MJNetwork.h>
@implementation MJAiSearchPart

+(void)test{
    [MJNetworkConfig sharedInstance].host = @"https://api.dataenlighten.com:7045";
       //    [MJNetworkConfig sharedInstance].timeoutSeconds = 15;
           //公共参数
           [MJNetworkConfig sharedInstance].mjUserId = @"mjUserId";
           [MJNetworkConfig sharedInstance].productCode = @"I0501";
           [MJNetworkConfig sharedInstance].version = @"0.1";
           [MJNetworkConfig sharedInstance].customTraceId = @"customTraceId";
           
           
           NSMutableDictionary *params = [NSMutableDictionary dictionary];
           [params setValue:@"13123456789" forKey:@"phoneNum"];
           [params setValue:@"000000" forKey:@"code"];
           [params setValue:@"1" forKey:@"appType"];

           [[MJNetworkManager sharedInstance]authenticationURL:@"/oauth/v2/loginByPhoneNum" parameters:params success:^(BOOL isSuccess, id response) {
           } failure:^(NSError *error) {
               
           }];
}
@end
