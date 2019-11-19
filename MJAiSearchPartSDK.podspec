#
# Be sure to run `pod lib lint MJAiSearchPartSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MJAiSearchPartSDK'
  s.version          = '0.1.0'
  s.summary          = 'MJAiSearchPartSDK 智能配件查询'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = '本SDK开发旨在提供方便快捷地获取汽车配件信息，通过VIN码或汽车品牌配置信息进行车辆定型后即可使用圈选或者配件名、OE等形式获取配件信息。本SDK使用时需要获取license。商务合作请联系明觉科技，SDK仅提供合作客户使用，违用必究!'

  s.homepage         = 'https://github.com/TBigShrimp/MJAiSearchPartSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'TBigShrimp' => 'mingfu.tian@dataenlighten.com' }
  s.source           = { :git => 'https://github.com/TBigShrimp/MJAiSearchPartSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'MJAiSearchPartSDK/Classes/**/*'
  
  s.libraries     = 'z', 'sqlite3' #表示依赖的系统类库，比如libz.dylib等
  s.vendored_frameworks = 'frameworks/MJNetwork.framework' # 依赖的第三方/自己的framework
  s.vendored_libraries = 'Library/Classes/libWeChatSDK.a'#表示依赖第三方/自己的静态库（比如libWeChatSDK.a）
  #依赖的第三方的或者自己的静态库文件必须以lib为前缀进行命名，否则会出现找不到的情况，这一点非常重要

  #s.prefix_header_contents = '#import "NSString+DIcToJson.h"'

  # s.resource_bundles = {
  #   'MJAiSearchPartSDK' => ['MJAiSearchPartSDK/Assets/*.png']
  # }

  s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit' #表示依赖系统的框架
  s.dependency 'AFNetworking'
end
