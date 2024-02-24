# AFGrayLogging

AFGrayLogging is a Kotlin Multiplatform library for sending logs to a Graylog server. This library enables seamless integration with both iOS and Android applications, providing a unified logging solution across platforms.

## Features

- Send logs to a Graylog server from Kotlin Multiplatform projects.
- Compatible with both iOS and Android platforms.
- Easy integration and configuration.

## Installation

To integrate AFGrayLogging into your Kotlin Multiplatform project, add the following dependency to your shared module's `build.gradle.kts` file:

```groovy
kotlin {
    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation("com.example:AFGrayLogging:1.0.0")
            }
        }
    }
}
