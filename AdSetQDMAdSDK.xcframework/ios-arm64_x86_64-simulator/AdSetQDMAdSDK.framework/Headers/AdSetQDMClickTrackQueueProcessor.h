#import <Foundation/Foundation.h>
#import "NetworkConstant.h"
#import "AdSetQDMTrackQueueProcessor.h"

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDMClickTrackQueueProcessor : NSObject

+ (instancetype)sharedInstance;

- (void)startProcessing;
- (void)stopProcessing;

- (void)registerBatchWithId:(NSString *)batchId
                 totalCount:(NSInteger)totalCount
                   listener:(nullable AdSetQDMTrackBatchCompleteBlock)listener;

- (BOOL)addClickTrack:(AdSetQDMTrackData *)trackData;
- (BOOL)addDeepTrackSuccess:(AdSetQDMTrackData *)trackData;
- (BOOL)addDeepTrackFail:(AdSetQDMTrackData *)trackData;

- (NSInteger)getClickQueueSize;

#if ADVISTA_ENV_DEBUG


- (NSDictionary *)snapshotForInspector;
#endif

@end

NS_ASSUME_NONNULL_END
