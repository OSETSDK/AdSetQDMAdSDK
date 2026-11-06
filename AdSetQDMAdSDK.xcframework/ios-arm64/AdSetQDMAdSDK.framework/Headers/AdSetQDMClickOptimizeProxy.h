#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDMAdDataProxy;
@class AdSetQDMOptimizeDatabase;
@protocol AdSetQDMClickOptimizeListener;

@interface AdSetQDMClickOptimizeProxy : NSObject

+ (BOOL)isCtrMisClickMode:(nullable AdSetQDMAdDataProxy *)adDataProxy;

- (instancetype)initWithView:(UIView *)view
                  adDataProxy:(AdSetQDMAdDataProxy *)adDataProxy
                isOnlyCtaClick:(BOOL)isOnlyCtaClick
                isSupportShake:(BOOL)isSupportShake
                       adWidth:(NSInteger)adWidth
                      adHeight:(NSInteger)adHeight
                      ctaWidth:(NSInteger)ctaWidth
                     ctaHeight:(NSInteger)ctaHeight
                       ctaPosX:(NSInteger)ctaPosX
                       ctaPosY:(NSInteger)ctaPosY
              optimizeListener:(id<AdSetQDMClickOptimizeListener>)optimizeListener;

- (void)dealAdClick:(BOOL)click;

- (void)onShakeClickConfirmed;

- (void)cancel;

- (void)onPause;
- (void)onResume;
- (void)destroy;

@end

@protocol AdSetQDMClickOptimizeListener <NSObject>
- (void)onAutomaticClickWithX:(NSInteger)x y:(NSInteger)y isMisclick:(BOOL)isMisclick;
- (void)onClose;
- (void)onShake;
@optional
- (void)onCtrShakeOptimize;
@end

NS_ASSUME_NONNULL_END
