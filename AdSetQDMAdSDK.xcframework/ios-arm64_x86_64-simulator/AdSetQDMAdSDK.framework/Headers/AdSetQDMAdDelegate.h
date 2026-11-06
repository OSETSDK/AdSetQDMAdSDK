#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDMTemplateAd;
@class AdSetQDMRewardInfo;

@protocol AdSetQDMAdDelegate <NSObject>
@required
- (void)onAdLoaded:(AdSetQDMTemplateAd *)ad;
- (void)onAdFailedToLoad:(NSInteger)code errorMsg:(NSString *)errorMsg;
- (void)onShowError:(NSInteger)code errorMsg:(NSString *)errorMsg;
- (void)onAdClicked;
- (void)onAdClosed;
- (void)onAdExposure;
- (void)onResourceReady;
@optional
- (void)onRewardVerify:(AdSetQDMRewardInfo *)rewardInfo;
- (void)onVideoPlayFinished;
- (void)adViewWillPresentScreen;
- (void)adViewDidCloseOtherController;
@end

NS_ASSUME_NONNULL_END
