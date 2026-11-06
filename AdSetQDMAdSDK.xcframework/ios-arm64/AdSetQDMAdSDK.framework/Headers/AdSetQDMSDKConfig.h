#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDMSDKConfig : NSObject

@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, assign) BOOL debugMode;
@property (nonatomic, assign) BOOL location;
@property (nonatomic, assign) BOOL carrier;
@property (nonatomic, assign) BOOL enablePersonalized;
@property (nonatomic, assign) BOOL IDFV;
@property (nonatomic, assign) BOOL IDFA;

@property (nonatomic, copy, nullable) NSString *customIDFA;
@property (nonatomic, copy, nullable) NSString *customIDFV;
@property (nonatomic, copy, nullable) NSString *customCarrier;
@property (nonatomic, copy, nullable) NSString *customLocation;

+ (instancetype)sharedConfig;
- (void)configureWithAppId:(NSString *)appId bundleId:(NSString *)bundleId;
- (void)resetToDefaults;

@end

NS_ASSUME_NONNULL_END
