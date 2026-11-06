#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdLoadParams : NSObject

@property (nonatomic, copy) NSString *sposId;
@property (nonatomic, assign) BOOL isMute;
@property (nonatomic, assign) BOOL isShake;
@property (nonatomic, assign) CGSize adSize;
@property (nonatomic, assign) BOOL sizeToFit;
@property (nonatomic, assign) NSInteger loadTimeOut;
@property (nonatomic, copy, nullable) NSString *userId;
@property (nonatomic, copy, nullable) NSString *extraInfo;

- (instancetype)init;
- (instancetype)initWithSposId:(NSString *)sposId;

@end

@interface AdLoadParamsBuilder : NSObject

- (instancetype)init;
- (AdLoadParamsBuilder *)setSposId:(NSString *)sposId;
- (AdLoadParamsBuilder *)setLoadTimeOut:(NSInteger)loadTimeOut;
- (AdLoadParamsBuilder *)setMute:(BOOL)isMute;
- (AdLoadParamsBuilder *)setAdSize:(CGSize)adSize;
- (AdLoadParamsBuilder *)setSizeToFit:(BOOL)sizeToFit;
- (AdLoadParamsBuilder *)setShake:(BOOL)isShake;
- (AdLoadParamsBuilder *)setUserId:(NSString *)userId;
- (AdLoadParamsBuilder *)setExtraInfo:(NSString *)extraInfo;
- (AdLoadParams *)build;

@end

@interface AdLoadParams (AdSetQDMSanitize)
- (void)sanitize;
@end

NS_ASSUME_NONNULL_END
