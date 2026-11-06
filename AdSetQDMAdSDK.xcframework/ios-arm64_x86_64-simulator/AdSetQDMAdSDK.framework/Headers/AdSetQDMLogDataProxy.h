#import <Foundation/Foundation.h>
@class AdSetQDMAdDataProxy;

@interface AdSetQDMLogDataProxy : NSObject

@property (nonatomic, assign) NSTimeInterval requestStartTime;

- (void)saveParam:(NSString *)key value:(NSString *)value;
- (void)saveDataParamsWithAdDataProxy:(AdSetQDMAdDataProxy *)adDataProxy;
- (void)saveUserClickScene:(NSString *)value;
- (NSDictionary *)getAdsInfoJson;
- (NSDictionary *)getAdsInfoJsonWithErrMsg:(NSString *)errMsg;
- (NSDictionary *)getAdsInfoJsonWithMsg:(NSString *)msg;
- (NSDictionary *)getAdsInfoJsonWithMedia;
- (NSDictionary *)getAdsRequestJson;

@end
