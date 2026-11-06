#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDMConstant : NSObject

@property (class, nonatomic, assign) BOOL IS_DETAIL_LOG_UPLOAD;
@property (class, nonatomic, assign) BOOL IS_DEBUG_LOG_UPLOAD;
@property (class, nonatomic, assign) double TEMPLATE_MIN_IMPRESSION;
@property (class, nonatomic, assign) NSInteger SPLASH_EXPOSURE_TIME;
@property (class, nonatomic, assign) NSInteger INTERSTITIAL_EXPOSURE_TIME;
@property (class, nonatomic, assign) NSInteger NATIVE_EXPOSURE_TIME;

@property (class, nonatomic, assign) BOOL AD_CACHE_STRATEGY_ENABLED;
@property (class, nonatomic, assign) NSInteger AD_CACHE_MAX_RECORDS_PER_SLOT;
@property (class, nonatomic, assign) long long AD_CACHE_SLOW_RESPONSE_THRESHOLD_MS;

+ (long long)adCacheSlowResponseThresholdMs;

@end

NS_ASSUME_NONNULL_END
