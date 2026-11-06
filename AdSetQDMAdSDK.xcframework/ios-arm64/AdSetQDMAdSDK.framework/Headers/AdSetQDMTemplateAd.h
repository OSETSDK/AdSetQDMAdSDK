#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AdSetQDMAdSDK/AdSetQDMAdTypes.h>
#import <AdSetQDMAdSDK/AdLoadParams.h>
#import <AdSetQDMAdSDK/AdSetQDMAdDelegate.h>
#import <AdSetQDMAdSDK/AdSetQDMBaseAdView.h>
#import <AdSetQDMAdSDK/AdSetQDMAdViewDelegate.h>
#import <AdSetQDMAdSDK/AdSetQDMLogDataProxy.h>
#import <AdSetQDMAdSDK/AdSetQDMAdDataModel.h>


NS_ASSUME_NONNULL_BEGIN

@class AdSetQDMTemplateAd;
@class AdSetQDMBidResponse;
@class AdSetQDMAdBean;
@class AdSetQDMSlotData;
@class AdSetQDMBudgetData;
@class AdSetQDMAdDataProxy;
@class AdSetQDMBaseAdView;
@class AdSetQDMAdViewListener;
@class AdSetQDMMaterialAdData;

@interface AdSetQDMTemplateAd : NSObject<AdSetQDMAdViewDelegate,AdSetQDMAdDataModelLoadListener>

@property (nonatomic, strong, nullable) AdSetQDMAdDataModel *adDataModel;

@property (nonatomic, copy, readonly) NSString *placementId;

@property (nonatomic, assign, readonly) AdSetQDMAdType adType;

@property (nonatomic, weak, nullable) id<AdSetQDMAdDelegate> listener;

@property (nonatomic, weak, nullable) UIViewController *viewController;

@property (nonatomic, assign) BOOL isLoaded;

@property (nonatomic, assign) BOOL isShowing;

@property (nonatomic, assign) BOOL isReady;

@property (nonatomic, assign) BOOL isDestroyed;

@property (nonatomic, assign) BOOL isExposed;
@property (nonatomic, assign) BOOL hostExposureNotified;

@property (nonatomic, strong,  nullable) AdSetQDMBidResponse *adResponse;

@property (nonatomic, strong) NSDictionary *adData;

@property (nonatomic, strong, nullable) AdSetQDMAdDataProxy *adDataProxy;

@property (nonatomic, strong, nullable) AdSetQDMMaterialAdData *materialAdData;

@property (nonatomic, strong, nullable) AdSetQDMLogDataProxy *logProxy;

@property (nonatomic, strong, nullable) AdLoadParams *loadParams;

@property (nonatomic, copy) NSString *requestId;

@property (nonatomic, assign) NSTimeInterval adLoadSuccessTime;

@property (nonatomic, strong, nonnull) AdSetQDMBaseAdView *adView;

- (instancetype)initWithPlacementId:(NSString *)placementId adType:(AdSetQDMAdType)adType;

- (instancetype)initWithLoadParams:(AdLoadParams *)loadParams  adType:(AdSetQDMAdType)adType listener:(id<AdSetQDMAdDelegate>)listener;

- (instancetype)initWithRequestId:(NSString *)requestId
                       loadParams:(AdLoadParams *)loadParams
                           adType:(AdSetQDMAdType)adType
                         listener:(id<AdSetQDMAdDelegate>)listener;

- (void)disablePopGestureForWindow:(UIWindow *)window;
- (void)loadAd;

- (void)renderAdView;

- (BOOL)isContainerSizeValid;

- (void)showAdInWindow:(UIWindow *)window;

/// 广告当前是否仍可展示：已加载、未销毁、未超过有效期。
- (BOOL)isValid;

- (void)closeAd;

- (void)destroy;

@property (nonatomic, assign) NSInteger touchDownX;
@property (nonatomic, assign) NSInteger touchDownY;
@property (nonatomic, assign) NSInteger touchUpX;
@property (nonatomic, assign) NSInteger touchUpY;

- (void)handleError:(NSError *)error;

- (void)handleClick;

- (void)handleClose;

/// 暂停/恢复广告。落地页打开、前后台切换走这里，子类可按跳转行为重写。
- (void)pauseAd;

- (void)resumeAd;

- (nullable AdSetQDMBaseAdView *)getAdView;

- (NSInteger)getECPM;

- (nullable AdSetQDMMaterialAdData *)getMaterialAdData;

- (nullable AdSetQDMAdBean *)firstAd;

- (nullable NSArray<AdSetQDMAdBean *> *)allAds;

- (nullable AdSetQDMSlotData *)slotData;

- (nullable AdSetQDMBudgetData *)budgetData;

- (nullable NSString *)requestId;

- (nullable NSString *)tradeId;

@end

NS_ASSUME_NONNULL_END
