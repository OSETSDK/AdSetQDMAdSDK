Pod::Spec.new do |s|
  s.name = 'AdSetQDMAdSDK'
  s.version = '1.4.16'
  s.summary = 'OSET M 渠道广告 SDK 二进制分发包'
  s.description = <<-DESC
    AdSetQDMAdSDK 1.4.16 的原厂 XCFramework 分发包，包含真机和模拟器动态框架、内嵌资源及隐私清单。
  DESC
  s.homepage = 'https://github.com/OSETSDK/AdSetQDMAdSDK'
  s.license = {
    :type => 'Commercial',
    :text => "The bundled SDK binary remains subject to its original publisher's commercial license and terms. This repository distributes the supplied binary without changing those terms."
  }
  s.author = { 'OSETSDK' => 'yaohaofei@shenshiads.com' }
  s.source = {
    :git => 'https://github.com/OSETSDK/AdSetQDMAdSDK.git',
    :tag => s.version.to_s
  }
  s.ios.deployment_target = '10.0'
  s.vendored_frameworks = 'AdSetQDMAdSDK.xcframework'
  s.frameworks = 'Foundation', 'UIKit', 'Security', 'AVFoundation',
                 'AdSupport', 'CoreFoundation', 'CoreGraphics', 'CoreImage',
                 'CoreLocation', 'CoreMedia', 'CoreMotion', 'CoreTelephony',
                 'QuartzCore', 'SafariServices', 'SystemConfiguration', 'WebKit'
  s.weak_frameworks = 'AppTrackingTransparency'
  s.libraries = 'sqlite3', 'z'
end
