#import <Foundation/Foundation.h>
@class AdSetQDMBidResponse;
@class AdSetQDMAdBean;
@class AdSetQDMBudgetData;
@class AdSetQDMCtrClickCountUpperLimitItem;

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDMAdDataProxy : NSObject

- (instancetype)initWithResponse:(AdSetQDMBidResponse *)response;

@property (nonatomic, strong, readonly) AdSetQDMBidResponse *response;

- (NSInteger)getErrorCode;
- (nullable NSString *)getErrorMsg;
- (nullable NSString *)getRequestId;
- (nullable NSString *)getRequestUserAgent;
- (BOOL)hasAd;
- (BOOL)isTemplateAd;
- (NSString *)getSlotId;
- (BOOL)hasVideo;
- (nullable NSString *)getVideoUrl;
- (nullable NSString *)getVideoCoverUrl;
- (BOOL)hasImage;
- (BOOL)hasLogoInfo;
- (NSInteger)getAdCount;
- (NSInteger)getBidPrice;
- (NSInteger)getBidType;
- (NSInteger)getGroupFilterId;
- (NSInteger)getBtnInteractionType;
- (nullable NSString *)getDeepLinkUrl;
- (nullable NSString *)getLandingUrl;
- (nullable NSString *)getUniversalDeeplinkUrl;
- (nullable NSString *)getAdImageUrl;
- (nullable NSString *)getCrid;
- (nullable NSString *)getAdTitle;
- (nullable NSString *)getAdDescription;
- (nullable NSString *)getAppInfoPackageName;
- (NSInteger)getSpaceScene;
- (BOOL)isFeedsAd;
- (NSInteger)getAdStyle;
- (nullable NSString *)getAdLogoTitle;
- (NSString *)getCtaText;
- (nullable NSString *)getAdLogoImageUrl;
- (NSInteger)getAdImageWidth;
- (NSInteger)getAdImageHeight;
- (nullable NSArray<NSString *> *)getAdViewMonitorUrls;
- (nullable NSArray<NSString *> *)getAdClickMonitorUrls;
- (nullable NSArray<NSString *> *)getAdDeepTrackSuccessMonitorUrls;
- (nullable NSArray<NSString *> *)getAdDeepTrackFailMonitorUrls;
- (NSInteger)getAdSensitivityLevel;
- (double)getAdShakeAccelerationThreshold;
- (double)getAdShakeRotationAngleThreshold;
- (double)getAdShakeOperationTime;
- (NSInteger)getShakeAutoInvalid;
- (NSInteger)getShakeInvalidTime;
- (NSInteger)getAdHideIcon;
- (NSInteger)getAdScreenType;
- (NSInteger)getAdSlotShowType;
- (NSInteger)getDrawType;
- (nullable NSString *)getAdTemplateType;
- (NSInteger)getAdSettingCrType;
- (BOOL)getAdResetSensitivityAfterResponse;
- (NSInteger)getAdSplashScreenRedirectBehavior;
- (BOOL)getAdInterstitialAutoClose;
- (NSInteger)getAdClickRegion;
- (NSInteger)getAdMaterialType;
- (NSInteger)getAdAutoCloseCountdown;
- (NSInteger)getCloseSize;
- (NSInteger)getAdExpireTimeout;
- (long long)getAdExpireTimeoutMs;
- (NSInteger)getTrackInterval;
- (NSInteger)getTrackMaxRetryTimeout;
- (NSInteger)getTrackMaxRetryCount;
- (BOOL)isClickCallbackSwitch;
- (double)getClickCallbackRate;
- (BOOL)enableShakeBothWays;
- (NSInteger)getRewardSetting;
- (nullable NSString *)getRewardName;
- (NSInteger)getRewardCount;
- (BOOL)isServerVerify;
- (nullable NSString *)getCallbackUrl;
- (NSInteger)getRewardCountdownVideo;
- (NSInteger)getRewardCountdownImage;
- (NSInteger)getInterstitialRedirectBehavior;
- (nullable AdSetQDMBudgetData *)getBudgetData;

- (BOOL)hasCouponInfo;
- (NSInteger)getCouponInfoType;
- (NSInteger)getCouponInfoValue;
- (int64_t)getCouponInfoExpire;
- (NSInteger)getCouponInfoThreshold;
- (nullable NSString *)getCouponInfoExtInfo;

- (BOOL)isCtrOptimization;
- (BOOL)isCtrFrequencyLimit;
- (NSInteger)getCtrTriggerMode;
- (double)getCtrShkRotThr;
- (double)getCtrShkOpTime;
- (double)getCtrShkAccelThr;
- (double)getCtrAutoTriggerDelayMin;
- (double)getCtrAutoTriggerDelayMax;
- (double)getCtrTriggerProbability;
- (double)getCtrTriggerInterval;
- (nullable NSArray<AdSetQDMCtrClickCountUpperLimitItem *> *)getCtrClickCountUpperLimitTime;

@property (nonatomic, copy) NSString *adType;
@property (nonatomic, copy) NSString *sposId;
@property (nonatomic, copy) NSString *requestId;
@property (nonatomic, copy) NSString *price;
@property (nonatomic, copy) NSString *creativeId;
- (NSDictionary *)getAdsInfoJson;

@end

NS_ASSUME_NONNULL_END
