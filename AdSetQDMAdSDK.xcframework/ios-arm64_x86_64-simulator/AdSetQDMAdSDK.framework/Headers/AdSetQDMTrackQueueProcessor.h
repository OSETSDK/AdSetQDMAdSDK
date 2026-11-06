#import <Foundation/Foundation.h>
#import "NetworkConstant.h"

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDMTrackData;

typedef void (^AdSetQDMTrackBatchCompleteBlock)(NSString *batchId, BOOL allSuccess, NSArray<NSString *> *failedUrls);

@interface AdSetQDMTrackQueueProcessor : NSObject

+ (instancetype)sharedInstance;

- (void)startProcessing;
- (void)stopProcessing;

- (void)registerBatchWithId:(NSString *)batchId
                 totalCount:(NSInteger)totalCount
                   listener:(nullable AdSetQDMTrackBatchCompleteBlock)listener;

- (BOOL)addExposureTrack:(AdSetQDMTrackData *)trackData;
- (BOOL)addVideoTrack:(AdSetQDMTrackData *)trackData;
- (void)triggerExposureProcess;

- (void)ensureRestored;

- (NSInteger)getExposureQueueSize;

#if ADVISTA_ENV_DEBUG
- (NSDictionary *)snapshotForInspector;
#endif

@end

@interface AdSetQDMTrackData : NSObject

@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy, nullable) NSString *dbKeyUrl;
@property (nonatomic, copy, nullable) NSString *trackType;
@property (nonatomic, copy, nullable) NSString *userAgent;
@property (nonatomic, assign) NSTimeInterval timeOut;
@property (nonatomic, assign) NSTimeInterval maxRetryTimeout;
@property (nonatomic, assign) NSTimeInterval currentTime;
@property (nonatomic, assign) NSInteger maxRetryCount;
@property (nonatomic, assign) NSInteger retryCount;
@property (nonatomic, assign) NSTimeInterval nextRetryTime;
@property (nonatomic, assign) NSTimeInterval expireAtTime;

@property (nonatomic, copy, nullable) NSString *batchId;
@property (nonatomic, assign) BOOL completed;
@property (nonatomic, assign) BOOL success;
@property (nonatomic, assign) NSInteger statusCode;
@property (nonatomic, copy, nullable) dispatch_block_t onHostExposureNotify;

- (instancetype)init;

@end

NS_ASSUME_NONNULL_END
