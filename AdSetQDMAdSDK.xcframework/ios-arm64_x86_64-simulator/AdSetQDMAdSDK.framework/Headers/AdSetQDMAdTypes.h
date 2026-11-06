#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, AdSetQDMAdType) {
    AdSetQDMAdTypePopup = 1,
    AdSetQDMAdTypeBanner = 2,
    AdSetQDMAdTypeInterstitial = 6,
    AdSetQDMAdTypeSplash = 4,
    AdSetQDMAdTypeNative = 1,
    AdSetQDMAdTypeReward = 3
};

typedef NS_ENUM(NSInteger, AdSetQDMAcceptNetworkProtocol) {
    AdSetQDMAcceptNetworkProtocolAll = 1,
    AdSetQDMAcceptNetworkProtocolHttps = 2,
    AdSetQDMAcceptNetworkProtocolHttp = 3
};

typedef NS_ENUM(NSInteger, AdSetQDMDeviceType) {
    AdSetQDMDeviceTypeUnknown = 0,
    AdSetQDMDeviceTypeMobile = 1,
    AdSetQDMDeviceTypePad = 2
};

typedef NS_ENUM(NSInteger, AdSetQDMOsType) {
    AdSetQDMOsTypeUnknown = 0,
    AdSetQDMOsTypeAndroid = 1,
    AdSetQDMOsTypeIos = 2
};

typedef NS_ENUM(NSInteger, AdSetQDMConnectType) {
    AdSetQDMConnectTypeUnknown = 0,
    AdSetQDMConnectTypeEthernet = 1,
    AdSetQDMConnectTypeWifi = 2,
    AdSetQDMConnectTypeUnknownG = 3,
    AdSetQDMConnectTypeTwoG = 4,
    AdSetQDMConnectTypeThreeG = 5,
    AdSetQDMConnectTypeFourG = 6,
    AdSetQDMConnectTypeFiveG = 7
};

typedef NS_ENUM(NSInteger, AdSetQDMSpaceScene) {
    AdSetQDMSpaceSceneUnknown = 0,
    AdSetQDMSpaceSceneFeeds = 1,
    AdSetQDMSpaceSceneBanner = 2,
    AdSetQDMSpaceSceneIncentive = 3,
    AdSetQDMSpaceSceneSplash = 4,
    AdSetQDMSpaceSceneTouch = 5,
    AdSetQDMSpaceSceneInterstitial = 6
};

typedef NS_ENUM(NSInteger, AdSetQDMBidType) {
    AdSetQDMBidTypeUnknown = 0,
    AdSetQDMBidTypeCpm = 1,
    AdSetQDMBidTypeCpc = 2
};

typedef NS_ENUM(NSInteger, AdSetQDMCarrierType) {
    AdSetQDMCarrierTypeUnknown = 0,
    AdSetQDMCarrierTypeMobile = 1,
    AdSetQDMCarrierTypeUnicom = 2,
    AdSetQDMCarrierTypeTelecom = 3
};

typedef NS_ENUM(NSInteger, AdSetQDMInteractionType) {
    AdSetQDMInteractionTypeUnknown = 0,
    AdSetQDMInteractionTypeAppDownload = 1,
    AdSetQDMInteractionTypeDeeplink = 2,
    AdSetQDMInteractionTypeLandingUrl = 3,
    AdSetQDMInteractionTypeMiniProgram = 4,
    AdSetQDMInteractionTypeUniversalLinkUrl = 5
};

typedef NS_ENUM(NSInteger, AdSetQDMAdStyle) {
    AdSetQDMAdStyleUnknown = 0,
    AdSetQDMAdStyleHorizontalBigImage = 1,
    AdSetQDMAdStyleHorizontalVideo = 2,
    AdSetQDMAdStyleVerticalBigImage = 3,
    AdSetQDMAdStyleVerticalVideo = 4,
    AdSetQDMAdStyleSquareBigImage = 5,
    AdSetQDMAdStyleSquareVideo = 6,
    AdSetQDMAdStyleHorizontal4_3BigImage = 7,
    AdSetQDMAdStyleHorizontal4_3Video = 8,
    AdSetQDMAdStyleVertical3_4BigImage = 9,
    AdSetQDMAdStyleVertical3_4Video = 10,
    AdSetQDMAdStyleHorizontal2_1BigImage = 11,
    AdSetQDMAdStyleHorizontal2_1Video = 12,
    AdSetQDMAdStyleVertical1_2BigImage = 13,
    AdSetQDMAdStyleVertical1_2Video = 14,
    AdSetQDMAdStyleHorizontal3_2BigImage = 15,
    AdSetQDMAdStyleHorizontal3_2Video = 16,
    AdSetQDMAdStyleVertical2_3BigImage = 17,
    AdSetQDMAdStyleVertical2_3Video = 18,
    AdSetQDMAdStyleAnyImage = 1000,
    AdSetQDMAdStyleAnyVideo = 1001
};

NS_ASSUME_NONNULL_END
