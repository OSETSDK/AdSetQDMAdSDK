#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdSetQDMAdDataProxy.h"

@class AdSetQDMSelfRenderAd;
@class AdSetQDMNativeVideoPlayerView;

@interface AdSetQDMNativeFeedsData : NSObject

@property (nonatomic, assign) BOOL shakeEnabled;

@property (nonatomic, strong) AdSetQDMAdDataProxy *adDataProxy;
@property (nonatomic, strong) AdSetQDMNativeVideoPlayerView *videoPlayerView;
@property (nonatomic, assign) BOOL isReady;

@property (nonatomic, weak, nullable) UIViewController *viewController;

@property (nonatomic, assign) NSInteger materialType;

- (instancetype)initWithSelfRenderAd:(AdSetQDMSelfRenderAd *)selfRenderAd
                         adDataProxy:(AdSetQDMAdDataProxy *)adDataProxy
                      videoPlayerView:(AdSetQDMNativeVideoPlayerView *)videoPlayerView;
- (NSString *)getRequestId;
- (NSString *)getVideoUrl;
- (NSString *)getVideoCoverImage;
- (NSString *)getImageUrl;
- (NSString *)getIconUrl;
- (UIImage *)getAdsLogoBitmap;
- (NSString *)getDesc;
- (NSInteger)getECPM;
- (NSString *)getTitle;
- (NSString *)getCtaText;
- (NSString *)getAdOriginName;
- (NSString *)getLogoBitmap;
- (NSInteger)getMainImageWidth;
- (NSInteger)getMainImageHeight;
- (NSInteger)getMaterialType;
- (AdSetQDMNativeVideoPlayerView *)getVideoPlayer;

- (BOOL)isValid;

- (BOOL)supportShake;
- (void)setShakeWidth:(CGFloat)shakeWidth;
- (void)setShakeHeight:(CGFloat)shakeHeight;

- (void)registerSelfRenderViews:(UIView *)selfRenderView
                     clickViews:(NSArray<UIView *> *)clickViews
                     shakeWidth:(CGFloat)shakeWidth
                    shakeHeight:(CGFloat)shakeHeight;

- (void)closeAd;

- (void)destroy;

@end
