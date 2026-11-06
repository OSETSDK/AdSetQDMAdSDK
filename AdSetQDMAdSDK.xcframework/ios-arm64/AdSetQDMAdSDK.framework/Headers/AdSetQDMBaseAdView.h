#import <UIKit/UIKit.h>
#import "AdSetQDMAdDataProxy.h"
#import <CoreMotion/CoreMotion.h>
#import "AdSetQDMAdViewDelegate.h"
#import "AdSetQDMAdDataCache.h"
#import <AVFoundation/AVFoundation.h>
#import "AdLoadParams.h"
#import "AdSetQDMClickOptimizeProxy.h"
#import "AdSetQDMTouchGestureState.h"

NS_ASSUME_NONNULL_BEGIN

typedef NSString * AdSetQDMClickScene NS_STRING_ENUM;

@interface AdSetQDMBaseAdView : UIView <AdSetQDMAdDataCacheListener, AdSetQDMClickOptimizeListener>

@property (nonatomic, strong) AdSetQDMAdDataProxy *adDataProxy;
@property (nonatomic, strong) id<AdSetQDMAdViewDelegate> viewListener;
@property (nonatomic, assign) BOOL isOpen;
@property (nonatomic, assign) CGFloat mScale;
@property (nonatomic, assign) NSInteger leftMargin;
@property (nonatomic, assign) NSInteger topMargin;
@property (nonatomic, assign) BOOL isMute;
@property (nonatomic, assign) BOOL isDestroyed;
@property (nonatomic, strong, nullable) AdSetQDMClickOptimizeProxy *clickOptimizeProxy;

@property (nonatomic, assign) long long lastShakeTime;
@property (nonatomic, assign) long long lastAccelerometerTime;
@property (nonatomic, assign) BOOL hasClicked;

@property (nonatomic, assign) AdLoadParams *loadParams;
@property (nonatomic, assign) double shakeAccelerationThreshold;
@property (nonatomic, assign) int shakeRotationAngleThreshold;
@property (nonatomic, assign) double shakeOperationTime;

@property (nonatomic, assign) BOOL enableShakeBothWays;
@property (nonatomic, strong) NSMutableArray<NSNumber *> *lastAccelerometerValues;
@property (nonatomic, strong) NSMutableArray<NSNumber *> *lastShakeAngle;
@property (nonatomic, copy) AdSetQDMClickScene clickScene;
@property (nonatomic, assign) float angle0, angle1, angle2;
@property (nonatomic, assign) NSTimeInterval timestamp;

@property (nonatomic, strong) AVPlayer *videoPlayer;
@property (nonatomic, strong) AVPlayerLayer *videoPlayerLayer;
@property (nonatomic, strong) AVPlayerItem *videoPlayerItem;
@property (nonatomic, assign) BOOL isVideoPreloaded;
@property (nonatomic, assign) BOOL hasNotifiedResourceReady;
@property (nonatomic, assign) BOOL shouldAutoPlay;

@property (nonatomic, strong, nullable) AdSetQDMAdDataCache *adDataCache;
@property (nonatomic, assign, readonly) BOOL isResourceReady;

@property (nonatomic, assign, readonly) BOOL isImageReady;

@property (nonatomic, assign, readonly) BOOL couponCardShowing;

- (instancetype)initWithAdDataProxy:(AdSetQDMAdDataProxy *)proxy
                           loadParams:(AdLoadParams *)loadParams
                            listener:(id<AdSetQDMAdViewDelegate>)listener;

- (void)initUI;

- (void)setInterActionListener:(UIView *)view;
- (void)setInterActionListener:(UIView *)view enableTouchMisClick:(BOOL)enableTouchMisClick;
- (void)removeInterActionListenerFromView:(nullable UIView *)view;
- (nullable UIView *)getOptimizeInteractionView;

- (BOOL)supportShake;
- (BOOL)supportAutoClose;
- (BOOL)allAreaClick;
- (BOOL)isShakeAutoInvalid;
- (NSInteger)getShakeInvalidTime;

- (void)startShakeAnimation:(UIView *)view;
- (void)startShakeSensor;

- (void)pauseAd;
- (void)resumeAd;
- (void)pauseVideoOnly;
- (void)resumeVideoOnly;
- (void)destroyAd;

- (void)resumeShakeAnimations;

- (void)renderWithAdDataProxy;

- (void)show;

- (void)stopShakeSensor;

- (void)loadImageFromURL:(NSString *)urlString intoImageView:(UIImageView *)imageView;
- (void)loadImageFromURL:(NSString *)urlString intoImageView:(UIImageView *)imageView withBlur:(BOOL)enableBlur;
- (void)loadImageFromURL:(NSString *)urlString intoImageView:(UIImageView *)imageView withBlur:(BOOL)enableBlur blurRadius:(CGFloat)blurRadius;

- (void)renderWithCachedResources;

- (nullable UIView *)getCtaButton;

- (void)startLoadResources;

- (nullable UIImage *)getAdImage;

- (nullable UIImage *)getLogoImage;

- (nullable UIImage *)getVideoCoverImage;

- (void)onShakeDetected;

- (void)checkReady;

- (void)preloadVideoWithURL:(NSURL *)videoURL;
- (void)setupVideoPlayerLayer;
- (void)startVideoPlayback;
- (void)stopVideoPlayback;
- (void)cleanupVideoPlayer;

- (void)doOptimizeClick:(UIView *)ctaButton click:(BOOL)click;

- (void)doOptimizeClickWithoutSkip:(UIView *)ctaButton
                            click:(BOOL)click
                       completion:(nullable void (^)(BOOL hasTriggeredMisclick))completion;

@end

NS_ASSUME_NONNULL_END
