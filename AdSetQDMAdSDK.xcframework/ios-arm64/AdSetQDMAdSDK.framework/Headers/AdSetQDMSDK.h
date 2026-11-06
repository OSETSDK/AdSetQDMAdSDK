#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdSetQDMSDKConfig.h"
#import "AdSetQDMInitParams.h"
#import "AdLoadParams.h"
#import "AdSetQDMAdDelegate.h"
#import "AdSetQDMSelfRenderAd.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDMInitListener <NSObject>
@required
- (void)onInitSuccess;
- (void)onInitFailed:(NSInteger)code errorMsg:(NSString *)errorMsg;
@end

@interface AdSetQDMSDK : NSObject

@property (nonatomic, class, readonly) BOOL isDebug;

+ (instancetype)sharedInstance;

- (void)setupWithConf:(AdSetQDMSDKConfig *) config
             listener:(nullable id<AdSetQDMInitListener>)listener;

- (void)setupWithConf:(AdSetQDMSDKConfig *) config
           initParams:(nullable AdSetQDMInitParams *)initParams
             listener:(nullable id<AdSetQDMInitListener>)listener;

- (void)loadSplashAdWithParams:(AdLoadParams *)params customBottomView:(nullable UIView*)customBottomView listener:(id<AdSetQDMAdDelegate>)listener;

- (void)loadInterstitialWithParams:(AdLoadParams*)params listener:(id<AdSetQDMAdDelegate>)listener;

- (void)loadNativeAdWithParams:(AdLoadParams *)params listener:(id<AdSetQDMAdDelegate>)listener;

- (void)loadRewardVideoWithParams:(AdLoadParams *)params listener:(id<AdSetQDMAdDelegate>)listener;

- (void)loadSelfRenderAdWithParams:(AdLoadParams *)params listener:(id<AdSetQDMSelfRenderAdListener>)listener;

+ (NSString *)getVersion;

+ (NSString *)getDeviceInfo;

+ (NSString *)getAdLogoUrl;

@end

NS_ASSUME_NONNULL_END
