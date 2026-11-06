# AdSetQDMAdSDK

M 渠道广告 SDK 的 OSET 二进制分发仓库。本次交付保留原厂 `AdSetQDMAdSDK.xcframework` 内容，SDK 版本为 **1.4.16**。

## CocoaPods 接入

正式接入使用 OSET Specs 中的已发布规格，并保留项目所需的其他 Pod 源。版本对应本仓库的同名 Git tag。

```ruby
source 'https://github.com/OSETSDK/Specs.git'
source 'https://cdn.cocoapods.org/'

target 'YourApp' do
  pod 'AdSetQDMAdSDK', '1.4.16'
end
```

```bash
pod install --repo-update
```

该 Pod 是渠道 SDK 二进制，OSET 渠道接入通过 `AdSetQDMAdapter` 使用。仅安装 SDK 并不替代初始化、广告位配置和原厂接入要求。

## 包内容和平台能力

| 配置 | 架构 | 二进制最低系统版本 |
|---|---|---|
| iPhone / iPad 真机 | arm64 | iOS 10.0 |
| Intel 模拟器 | x86_64 | iOS 10.0 |
| Apple Silicon 模拟器 | arm64 | iOS 14.0 |

SDK 为动态框架，应用归档需正确嵌入和签名。CocoaPods 会根据 vendored framework 生成相应集成脚本；手动集成时需使用 Embed & Sign。`Assets.car` 和 `PrivacyInfo.xcprivacy` 已包含在框架内，无额外外置资源包。

公开模块使用 `@import AdSetQDMAdSDK;` 或 `#import <AdSetQDMAdSDK/advista.h>`。公开入口提供开屏、插屏、模板信息流、激励视频和自渲染信息流；具体广告能力受原厂配置和广告位支持情况约束。

## 产物标识

- SDK 版本：`1.4.16`。
- 原始交付文件：`AdSetQDMAdSDK.xcframework.zip`。
- 原始 ZIP SHA-256：`f12a9c055dd1fade930ee68d92775b7d1d1decc9f03d3905d117ab277bc7fda3`。
- Git 发布 tag：`1.4.16`。

## 许可

原厂 SDK 二进制继续适用其原有商业许可及使用条款，详见 [NOTICE](NOTICE)。此仓库不将该二进制重新许可为 MIT 或其他开源许可。
