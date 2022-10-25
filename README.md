# Naurt.swift

## Introduction

Naurt is an SDK that allows for improved location data on mobile devices. 

Looking for the [Android version](https://github.com/Naurt-Ltd-Public/naurt-android-sdk)? 

Need an access key? Contact the [sales team](https://www.naurt.com/#Contact1)

## Getting started

Since NaurtSDK is closed source, it is distributed through a .xcframework. 

NaurtSDK only works on iOS, minimum version 15.

### App
If you are developing an app in XCode, the easiest way to add NaurtSDK to the project is by dragging NaurtSDK.framework into the "frameworks, libraries and embedded content" of the app settings

### SPM

Add Naurt to your Swift project by adding 

```
dependencies: [
    .package(url: "https://github.com/Naurt-Ltd-Public/Naurt.swift.git", from("0.0.1")),
]
```

### Cocoapod

Add 

```
pod "Naurt.swift", "~> 0.0.1"
```

To your pod file.

You will still need to manually add the dependency `swift-collections` to your project, since there is no Pod for that dependency yet

### Carthage

Coming soon

## Usage

Import NaurtSDK with 

`import NaurtSDK`

Create a `Naurt` object with

`let naurt = Naurt(apiKey: <YOUR API KEY HERE>)`

To use Naurt, it is reccomended to use a delegate, ensure it conforms to the `NaurtDelegate` protocal. 

## Documentation

Full docs can be found [here](https://docs.naurt.net/ios_sdk)

## Development 

Coming soon

