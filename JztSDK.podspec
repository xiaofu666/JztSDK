

Pod::Spec.new do |s|
    s.name             = 'JztSDK'
    s.version          = '1.3.4.1'
    s.summary          = 'JztSDK'

    s.description      = <<-DESC
    'JztSDKJztSDKJztSDKJztSDKJztSDKJztSDKJztSDKJztSDKJztSDKJztSDKJztSDK'
                       DESC

    s.homepage         = 'https://github.com/xiaofu666/JztSDK'
    s.license      = { :type => "MIT", :file => "LICENSE" }
    s.author       = { "小富" => "3290235031@qq.com" }
    s.source       = { :git => 'https://github.com/xiaofu666/JztSDK.git', :tag => s.version.to_s }

    s.platform     = :ios, "9.0"

    s.vendored_frameworks = 'JADYun.framework'
    
    s.frameworks = 'AssetsLibrary', 'MapKit', 'JavaScriptCore', 'StoreKit', 'MobileCoreServices', 'WebKit', 'MediaPlayer', 'CoreMedia', 'AVFoundation', 'CoreLocation', 'CoreTelephony', 'SystemConfiguration', 'AdSupport', 'CoreMotion', 'Security', 'QuartzCore', 'CoreGraphics', 'SafariServices', 'UIKit', 'Foundation', 'AppTrackingTransparency', 'ImageIO', 'Accelerate', 'Photos'
    s.libraries = 'c++', 'resolv', 'xml2', 'bz2', 'z', 'iconv', 'sqlite3'

    s.xcconfig = { "OTHER_LDFLAGS" => "-ObjC" }
    s.pod_target_xcconfig = { 'VALID_ARCHS' => 'armv7 i386 x86_64 arm64' }

  
end
