#import <Foundation/Foundation.h>

@class AdSetQDMAdDataProxy;

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDMMaterialAdData : NSObject

- (instancetype)initWithAdDataProxy:(nullable AdSetQDMAdDataProxy *)adDataProxy;

- (NSString *)getId;
- (NSString *)getTitle;
- (NSString *)getDescription;
- (NSString *)getImageUrl;
- (NSString *)getVideoUrl;
- (NSString *)getDeepLink;
- (NSString *)getLandingUrl;
- (NSString *)getAppPackage;
- (NSString *)getAdvertiserName;
- (NSString *)getAdvertiserIcon;

@end

NS_ASSUME_NONNULL_END
