// swift-tools-version:5.2

import PackageDescription

let package = Package(
    name: "MMTabBarView",
    products: [
        .library(name: "MMTabBarView", targets: ["MMTabBarView"]),
    ],
    dependencies: [],
    targets: [
        .target(
            name: "MMTabBarView",
            dependencies: [],
            path: "MMTabBarView/MMTabBarView",
            publicHeadersPath: "."),
    ]
)
