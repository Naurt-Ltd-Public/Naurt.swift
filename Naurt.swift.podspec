Pod::Spec.new do |s|
	s.name = "Naurt.swift"
	s.version = "1.2.0"
	s.summary = "Naurt Swift SDK"
	s.description = <<-DESC
	Official Naurt framework for iOS development. Provides enchanced location tracking
	DESC
	s.homepage = "https://github.com/Naurt-Ltd-Public/Naurt.swift"
	s.author = {"Nathaniel Curnick" => "nathaniel.c@naurt.com"}
	s.platform              = :ios
	s.ios.deployment_target = "13.0"
	s.source = {:git => "https://github.com/Naurt-Ltd-Public/Naurt.swift.git", :tag => "1.2.0"}
	s.license = "Commercial"
	s.swift_version = "5.0"
	s.vendored_frameworks = "Sources/NaurtSDK.xcframework"
end
