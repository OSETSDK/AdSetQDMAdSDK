#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 手动切换环境：1 为测试环境，0 为正式环境
#define ADVISTA_ENV_DEBUG 0
// 存储命名空间：用于隔离 UserDefaults/Keychain/DB 本地数据，避免多品牌 SDK 共存冲突
#define ADVISTA_STORAGE_NAMESPACE @"qidian"
// 渠道打点（对齐 Android BuildConfig.CHANNEL）：标准包为空，品牌打包写入 --theme 名
#define ADVISTA_CHANNEL @"qidian"
// 品牌打包可选配置（默认 advista 标准包；vlion 等渠道由 build_with_brand.sh 写入）
#define ADVISTA_IOS_CLASS_PREFIX @"AdSetQDM"
#define ADVISTA_RESOURCE_BUNDLE_NAME @""
#define ADVISTA_RESOURCE_NAME_PREFIX @"qidian_"

#if ADVISTA_ENV_DEBUG
#define AD_REQUEST_URL @"https://sx-vista.divms.cn/adn/v2/getAd"
#define REWARD_VERIFY_URL @"https://sx-vista.divms.cn/adn/v2/cb"
#define INIT_SDK @"https://sx-vista.divms.cn/adn/v2/init"
#define SECRET_KEY @"w7hP6e6zT3506iZtYxkH"
#define LOG_URL @"https://sdk-logstore.cn-beijing.log.aliyuncs.com/logstores/sx-sdk-client-logstore/track"
#define ADVISTA_APP_ID @"954900"
#define ADVISTA_SPLASH_ID @"10256342"
#define ADVISTA_INTERESTIAL_ID @"30272174"
#define ADVISTA_REWARD_ID @"40282403"
#define ADVISTA_FEEDS_ID @"20300726"
#define ADVISTA_SELF_RENDER_ID @"20316217"
#else
#define AD_REQUEST_URL @"https://vista.divms.cn/adn/v2/getAd"
#define REWARD_VERIFY_URL @"https://vista.divms.cn/adn/v2/cb"
#define INIT_SDK @"https://vista.divms.cn/adn/v2/init"
#define SECRET_KEY @"Xj82MbFfWm7Du4XMPtCr"
#define LOG_URL @"https://sdk-logstore.cn-beijing.log.aliyuncs.com/logstores/sdk-client-logstore/track"
#define ADVISTA_APP_ID @"885939"
#define ADVISTA_SPLASH_ID @"10767745"
#define ADVISTA_INTERESTIAL_ID @"30775584"
#define ADVISTA_REWARD_ID @"40781880"
#define ADVISTA_FEEDS_ID @"20789003"
#define ADVISTA_SELF_RENDER_ID @"20965400"
#endif

#define ADN_SDK_VERSION @"1.4.16"
#define ADN_API_VERSION @"4"
#define ADVISTA_TRACK_HOST @"vista.divms.cn"

#define ADVISTA_DEFAULT_AD_CACHE_STRATEGY_ENABLED NO
#define ADVISTA_DEFAULT_AD_CACHE_MAX_RECORDS_PER_SLOT 10
#define ADVISTA_DEFAULT_AD_CACHE_SLOW_RESPONSE_THRESHOLD_MS 1000L
#define ADVISTA_AD_LOAD_DEFAULT_TIMEOUT_MS 5000L

NS_ASSUME_NONNULL_END
