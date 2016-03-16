Pod::Spec.new do |s|
  s.name                = "GTLFramework"
  s.version             = "1.0.0"
  s.summary             = "GTLFramework"
  s.homepage            = "http://inspace.io"
  s.author              = { "Michał Zaborowski" => "m1entus@gmail.com" }
  s.license             = 'MIT'
  s.source   = { :git => 'https://github.com/m1entus/GTLFramework.git', :tag => '1.0.0' }

  s.ios.deployment_target = '8.0'

  s.ios.source_files = 'Source/*.{h,m}'
  s.requires_arc        = true
end