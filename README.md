AFGrayLogging
AFGrayLogging is a Kotlin Multiplatform library for sending logs to a Graylog server. This library is designed to be compatible with both iOS and Android applications, offering a unified logging solution across platforms.

Features
Send logs to a Graylog server from Kotlin Multiplatform projects.
Compatible with both iOS and Android platforms.
Easy to integrate and configure.
Installation
To install AFGrayLogging, follow these steps:

Add the AFGrayLogging dependency to your Kotlin Multiplatform project.
Configure the library with your Graylog server settings.
Start logging your application's messages.
Gradle (Kotlin Multiplatform)
groovy
Copy code
// Add this to your shared module build.gradle.kts
kotlin {
    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation("com.example:AFGrayLogging:1.0.0")
            }
        }
    }
}
Graylog Server Configuration
Before using AFGrayLogging, ensure that you have access to a Graylog server and note down the server's address, port, and any necessary authentication details.

Usage
Initialization
Initialize the AFGrayLogging library with your Graylog server settings:

kotlin
Copy code
import com.example.afgraylogging.AFGrayLogger

AFGrayLogger.initialize("http://your-graylog-server.com", 12201, "your_graylog_username", "your_graylog_password")
Logging Messages
Send log messages to your Graylog server using the logger instance:

kotlin
Copy code
import com.example.afgraylogging.AFGrayLogger

// Log a debug message
AFGrayLogger.debug("Debug log message")

// Log an info message
AFGrayLogger.info("Info log message")

// Log a warning message
AFGrayLogger.warn("Warning log message")

// Log an error message
AFGrayLogger.error("Error log message")
Customization
You can customize the logging behavior by configuring the logger instance or extending the provided classes as per your requirements.

Support
If you encounter any issues or have questions about AFGrayLogging, feel free to open an issue on GitHub.

Contributing
Contributions are welcome! If you'd like to contribute to AFGrayLogging.
