#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDMRewardInfo : NSObject

@property (nonatomic, assign) BOOL rewardValid;
@property (nonatomic, copy, nullable) NSString *userId;
@property (nonatomic, copy, nullable) NSString *transId;
@property (nonatomic, assign) NSInteger rewardAmount;
@property (nonatomic, copy, nullable) NSString *rewardName;
@property (nonatomic, assign) NSInteger errCode;
@property (nonatomic, copy, nullable) NSString *errMsg;
@property (nonatomic, copy, nullable) NSString *extraInfo;

@end

NS_ASSUME_NONNULL_END
