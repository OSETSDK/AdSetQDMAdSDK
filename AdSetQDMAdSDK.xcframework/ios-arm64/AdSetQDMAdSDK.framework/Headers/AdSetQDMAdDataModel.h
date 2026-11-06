#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdSetQDMAdTypes.h"
#import "AdSetQDMAdDataProxy.h"
#import "AdSetQDMLogDataProxy.h"
#import "AdSetQDMAdDelegate.h"
#import "AdLoadParams.h"

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDMAdDataModel;
@class AdSetQDMAdDataProxy;
@class AdSetQDMLogDataProxy;
@class AdSetQDMAdUploadTrackProxy;

@protocol AdSetQDMAdDataModelLoadListener <NSObject>
- (void)loadSuccess:(AdSetQDMAdDataProxy *)adDataProxy;
- (void)loadFailed:(NSInteger)code errorMsg:(NSString *)msg;
@end

@protocol AdSetQDMRewardVerifyListener <NSObject>
- (void)onSuccess;
- (void)onFailed:(NSInteger)code message:(NSString *)msg;
@end

@interface AdSetQDMAdDataModel : NSObject

@property (nonatomic, strong) AdSetQDMLogDataProxy *logDataProxy;
@property (nonatomic, strong, nullable) AdSetQDMAdDataProxy *adDataProxy;
@property (nonatomic, strong, nullable) AdSetQDMAdUploadTrackProxy *adUploadTrackProxy;

@property (nonatomic, copy, nullable) NSString *requestId;
@property (nonatomic, copy, nullable) NSString *sposId;
@property (nonatomic, assign) AdSetQDMAdType adType;
@property (nonatomic, assign) NSInteger width;
@property (nonatomic, assign) NSInteger height;
@property (nonatomic, weak, nullable) id<AdSetQDMAdDelegate> adListener;

- (instancetype)initWithAdDataProxy:(AdSetQDMAdDataProxy *)adDataProxy
                         logDataProxy:(AdSetQDMLogDataProxy *)logDataProxy;

- (instancetype)initWithRequestId:(NSString *)requestId
                            sposId:(NSString *)sposId
                            adType:(AdSetQDMAdType)adType
                             width:(NSInteger)width
                            height:(NSInteger)height
                       logDataProxy:(AdSetQDMLogDataProxy *)logDataProxy
                            timeOut:(NSInteger)timeOut
                         adListener:(nullable id<AdSetQDMAdDelegate>)adListener;

- (void)applyRequestId:(NSString *)newRequestId;

+ (NSString *)syncRequestIdFromProxy:(NSString *)currentRequestId
                             adProxy:(AdSetQDMAdDataProxy *)proxy
                                 model:(nullable AdSetQDMAdDataModel *)model
                          logDataProxy:(nullable AdSetQDMLogDataProxy *)logDataProxy;

- (void)loadAdWithListener:(id<AdSetQDMAdDataModelLoadListener>)loadListener;

- (void)doExposureWithSpaceWidth:(NSInteger)spaceWidth spaceHeight:(NSInteger)spaceHeight;

- (void)doExposureWithSpaceWidth:(NSInteger)spaceWidth
                     spaceHeight:(NSInteger)spaceHeight
           onHostExposureSuccess:(nullable dispatch_block_t)onHostExposureSuccess;

- (BOOL)isShowExpiredWithAdLoadTimeMs:(long long)adLoadTimeMs adExpiredTimeMs:(long long)adExpiredTimeMs;

- (void)releaseCacheOnDestroy:(BOOL)exposureConsumed;

- (void)lockClickTargetReportTime;

- (BOOL)uploadClickMonitorWithTouchDownX:(NSInteger)touchDownX
                              touchDownY:(NSInteger)touchDownY
                                touchUpX:(NSInteger)touchUpX
                                touchUpY:(NSInteger)touchUpY;

- (void)uploadDeepSuccessTrackMonitorWithTouchDownX:(NSInteger)touchDownX
                                         touchDownY:(NSInteger)touchDownY
                                           touchUpX:(NSInteger)touchUpX
                                           touchUpY:(NSInteger)touchUpY;

- (void)uploadDeepFailTrackMonitorWithTouchDownX:(NSInteger)touchDownX
                                      touchDownY:(NSInteger)touchDownY
                                        touchUpX:(NSInteger)touchUpX
                                        touchUpY:(NSInteger)touchUpY;

- (void)verifyRewardWithUserId:(nullable NSString *)userId
                        transId:(NSString *)transId
                      extraInfo:(nullable NSString *)extraInfo
                    adDataProxy:(AdSetQDMAdDataProxy *)proxy
                       listener:(id<AdSetQDMRewardVerifyListener>)listener;

- (void)releaseResources;

@end

NS_ASSUME_NONNULL_END
