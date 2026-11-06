#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * const AdSetQDMTrackPendingTypeClick;
FOUNDATION_EXPORT NSString * const AdSetQDMTrackPendingTypeDeepSuccess;
FOUNDATION_EXPORT NSString * const AdSetQDMTrackPendingTypeDeepFail;
FOUNDATION_EXPORT NSString * const AdSetQDMTrackPendingTypeExposure;

@interface AdSetQDMTrackPendingRecord : NSObject

@property (nonatomic, copy) NSString *url;
@property (nonatomic, assign) NSTimeInterval nextTime;
@property (nonatomic, assign) NSTimeInterval expireTime;
@property (nonatomic, assign) NSInteger flowRetryCount;
@property (nonatomic, assign) NSInteger maxFlowRetryCount;
@property (nonatomic, assign) NSTimeInterval createdTime;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy, nullable) NSString *userAgent;

@end

@interface AdSetQDMTrackPendingDatabase : NSObject

+ (instancetype)sharedInstance;

- (void)upsertRecord:(AdSetQDMTrackPendingRecord *)record;
- (void)updateFlowRetryByUrl:(NSString *)url flowRetryCount:(NSInteger)flowRetryCount;
- (void)updateNextTimeByUrl:(NSString *)url nextTime:(NSTimeInterval)nextTime;
- (void)deleteByUrl:(NSString *)url;
- (NSArray<AdSetQDMTrackPendingRecord *> *)queryByType:(NSString *)type;
- (void)deleteInvalidTrackRecords:(NSTimeInterval)now;
- (void)deleteInvalidClickRecords:(NSTimeInterval)now __deprecated_msg("use deleteInvalidTrackRecords: instead");

@end

NS_ASSUME_NONNULL_END
