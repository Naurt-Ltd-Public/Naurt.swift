// swift-tools-version: 5.6

import PackageDescription

let package = Package(
    name: "NaurtSDK",
    platforms: [.iOS(.v13)],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "NaurtSDK",
            targets: ["NaurtSDK"]),
    ],
    dependencies: [],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .binaryTarget(name: "NaurtSDK", path: "Sources/NaurtSDK.xcframework")
    ]
)
