#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdSetQDMAdDataProxy.h"

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDMAdDataCache;

@protocol AdSetQDMAdDataCacheListener <NSObject>

- (void)onLoadFinished;

@end

@interface AdSetQDMAdDataCache : NSObject

@property (nonatomic, strong, readonly) AdSetQDMAdDataProxy *adDataProxy;

@property (nonatomic, weak, nullable, readwrite) id<AdSetQDMAdDataCacheListener> listener;

@property (nonatomic, assign, readonly) BOOL isReady;

- (instancetype)initWithAdDataProxy:(AdSetQDMAdDataProxy *)adDataProxy
                           listener:(nullable id<AdSetQDMAdDataCacheListener>)listener;

- (void)startLoad;

- (nullable UIImage *)getAdImage;

- (nullable UIImage *)getLogoImage;

- (nullable UIImage *)getVideoCoverImage;

- (void)destroy;

@end

NS_ASSUME_NONNULL_END
