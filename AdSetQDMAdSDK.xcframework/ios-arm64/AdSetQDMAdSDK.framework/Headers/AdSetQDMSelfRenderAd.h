#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AdSetQDMAdSDK/AdSetQDMAdDataProxy.h>
#import <AdSetQDMAdSDK/AdSetQDMAdViewDelegate.h>
#import <AdSetQDMAdSDK/AdLoadParams.h>
#import <AdSetQDMAdSDK/AdSetQDMAdDataModel.h>

@class AdSetQDMSelfRenderAd;
@class AdSetQDMSelfRenderView;
@class AdSetQDMNativeFeedsData;

@protocol AdSetQDMSelfRenderAdListener <NSObject>
- (void)onSelfRenderAdLoaded:(AdSetQDMNativeFeedsData *)nativeFeedsData;
- (void)onSelfRenderAdLoadError:(NSInteger)code message:(NSString *)message;
- (void)onSelfRenderAdClosed;
- (void)onSelfRenderAdExposure;
- (void)onSelfRenderAdExposureFailed:(NSInteger)code message:(NSString *)message;
- (void)onSelfRenderAdClicked;
@optional
- (void)adViewWillPresentScreen;
- (void)adViewDidCloseOtherController;
@end

@interface AdSetQDMSelfRenderAd : NSObject <AdSetQDMAdViewDelegate, AdSetQDMAdDataModelLoadListener>

@property (nonatomic, strong) id<AdSetQDMSelfRenderAdListener> listener;

@property (nonatomic, weak, nullable) UIViewController *viewController;
@property (nonatomic, strong) AdSetQDMAdDataProxy *adDataProxy;
@property (nonatomic, strong, nullable) AdSetQDMAdDataModel *adDataModel;
@property (nonatomic, strong) AdSetQDMSelfRenderView *adView;
@property (nonatomic, assign) BOOL isExposed;
@property (nonatomic, assign) BOOL hostExposureNotified;
@property (nonatomic, assign) BOOL isDestroyed;
@property (nonatomic, assign) BOOL isShow;

@property (nonatomic, assign, readonly) NSTimeInterval adLoadTime;
@property (nonatomic, assign, readonly) NSTimeInterval adExpiredTime;

@property (nonatomic, assign, readonly) NSInteger touchDownX;
@property (nonatomic, assign, readonly) NSInteger touchDownY;
@property (nonatomic, assign, readonly) NSInteger touchUpX;
@property (nonatomic, assign, readonly) NSInteger touchUpY;

- (instancetype)initWithRequestId:(NSString *)requestId
                            params:(AdLoadParams *)params
                          listener:(id<AdSetQDMSelfRenderAdListener>)listener;

- (void)loadAd;

/// 广告当前是否仍可展示：已加载、未销毁、未超过有效期。
- (BOOL)isValid;

- (void)registerSelfRenderViews:(UIView *)selfRenderView
                     clickViews:(NSArray<UIView *> *)clickViews
                     shakeWidth:(CGFloat)shakeWidth
                    shakeHeight:(CGFloat)shakeHeight;

- (void)closeAd;
- (void)destroy;

- (void)pauseAd;
- (void)resumeAd;

@end
