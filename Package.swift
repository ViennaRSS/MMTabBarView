// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "MMTabBarView",
    defaultLocalization: LanguageTag("en"),
    platforms: [
        .macOS(.v10_13),
    ],
    products: [
        .library(name: "MMTabBarView", targets: ["MMTabBarView"]),
    ],
    targets: [
        .target(
            name: "MMTabBarView",
            path: "MMTabBarView/MMTabBarView",
            exclude: [
                "MMTabBarView-Info.plist",
                "MMTabBarView-Prefix.pch",
            ],
            resources: [
                .process("en.lproj"),
                .process("Images.xcassets"),
                .process("Safari.xcassets"),
                .process("Sierra.xcassets"),
                .process("Yosemite.xcassets"),
            ],
            cSettings: [
                .headerSearchPath(".")
            ])
    ]
)
