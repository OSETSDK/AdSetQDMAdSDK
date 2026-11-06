#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDMAdCacheRecord : NSObject

@property (nonatomic, assign) long long recordId;
@property (nonatomic, copy, nullable) NSString *sposId;
@property (nonatomic, copy, nullable) NSString *requestId;
@property (nonatomic, assign) NSInteger bidPrice;
@property (nonatomic, assign) long long expireDurationMs;
@property (nonatomic, assign) long long cachedAtMs;
@property (nonatomic, copy, nullable) NSString *responseJson;

@property (nonatomic, assign) BOOL delivered;

- (BOOL)isValidAtTimeMs:(long long)nowMs;

- (BOOL)isPrefetchCandidateAtTimeMs:(long long)nowMs;

@end

typedef void(^AdSetQDMAdCacheQueryCallback)(AdSetQDMAdCacheRecord * _Nullable record);

@interface AdSetQDMAdCacheDatabase : NSObject

+ (instancetype)sharedInstance;

- (BOOL)hasValidCacheForSposId:(NSString *)sposId;
- (nullable AdSetQDMAdCacheRecord *)queryBestValidForSposId:(NSString *)sposId;
- (void)queryBestValidAsyncForSposId:(NSString *)sposId callback:(AdSetQDMAdCacheQueryCallback)callback;

- (void)saveAsyncWithSposId:(NSString *)sposId
               responseJson:(NSString *)responseJson
         fallbackRequestId:(nullable NSString *)fallbackRequestId;

- (void)saveAsyncWithSposId:(NSString *)sposId
               responseJson:(NSString *)responseJson
         fallbackRequestId:(nullable NSString *)fallbackRequestId
        markDeliveredOnSave:(BOOL)markDeliveredOnSave;

- (void)markDeliveredAsyncForRequestId:(NSString *)requestId;
- (void)releaseDeliveredAsyncForRequestId:(NSString *)requestId;
- (void)resetAllDeliveredFlagsAsync;

- (void)deleteByRequestIdAsync:(NSString *)requestId;
- (void)cleanupSlotAsyncForSposId:(NSString *)sposId;

@end

NS_ASSUME_NONNULL_END
