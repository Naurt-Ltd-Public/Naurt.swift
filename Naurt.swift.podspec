Pod::Spec.new do |s|
	s.name = "Naurt.swift"
	s.version = "0.0.2"
	s.summary = "Naurt Swift SDK"
	s.description = <<-DESC
	Official Naurt framework for iOS development. Provides enchanced location tracking
	DESC
	s.homepage = "https://github.com/Naurt-Ltd-Public/Naurt.swift"
	s.author = {"Nathaniel Curnick" => "nathaniel.c@naurt.com"}
	s.ios.deployment_target = "13.4"
	s.source = {:git => "https://github.com/Naurt-Ltd-Public/Naurt.swift.git", :tag => s.version.to_s}
	s.dependency "Zip", "~> 2.1.2"
	s.dependency "LASwift", "~> 0.2.5"
	s.license = "Commercial"
	s.swift_version = "5.0"

	vdendored_frameworks = "Sources/NaurtSDK.xcframework"
end
