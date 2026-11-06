#import <Foundation/Foundation.h>
#import "AdSetQDMAdTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDMAdCacheKeyUtil : NSObject

+ (NSString *)buildWithSposId:(NSString *)sposId
                       adType:(AdSetQDMAdType)adType
                        width:(NSInteger)width
                       height:(NSInteger)height;

+ (NSString *)buildWithSposId:(NSString *)sposId
                       adType:(AdSetQDMAdType)adType
                        width:(NSInteger)width
                       height:(NSInteger)height
              appendFeedsSize:(BOOL)appendFeedsSize;

@end

NS_ASSUME_NONNULL_END
