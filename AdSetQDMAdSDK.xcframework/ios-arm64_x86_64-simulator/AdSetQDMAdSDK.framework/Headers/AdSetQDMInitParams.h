#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDMInitParams : NSObject

@property (nonatomic, assign) BOOL isDebug;
@property (nonatomic, copy, nullable) NSString *customIdfa;
@property (nonatomic, copy, nullable) NSString *customIdfv;
@property (nonatomic, copy, nullable) NSString *customMac;
@property (nonatomic, copy, nullable) NSString *customGeo;

+ (instancetype)initParams;

@end

@interface AdSetQDMInitParamsBuilder : NSObject

@property (nonatomic, assign) BOOL debug;
@property (nonatomic, copy, nullable) NSString *customIdfa;
@property (nonatomic, copy, nullable) NSString *customIdfv;
@property (nonatomic, copy, nullable) NSString *customMac;
@property (nonatomic, copy, nullable) NSString *customGeo;

- (void)setDebug:(BOOL)debug;
- (void)setCustomIdfa:(NSString *)idfa;
- (void)setCustomIdfv:(NSString *)idfv;
- (void)setCustomMac:(NSString *)mac;
- (void)setCustomGeo:(NSString *)geo;

- (AdSetQDMInitParams *)build;

@end

NS_ASSUME_NONNULL_END 
