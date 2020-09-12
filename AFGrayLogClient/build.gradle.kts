import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget



plugins {
    kotlin("multiplatform")
    id("com.android.library")
    id("kotlin-android-extensions")

}


repositories {
    gradlePluginPortal()
    google()
    jcenter()
    mavenCentral()
    maven {
        url = uri("https://dl.bintray.com/kotlin/kotlin-eap")
    }
}
val coroutinesVersion = "1.3.9-native-mt"
val ktorVersion = "1.4.0"


kotlin {
    android()
    ios {
        binaries {
            framework {
                baseName = "kmmsharedmodule"
            }
        }
    }
    sourceSets {

        commonMain {
            dependencies {
                // ...
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:$coroutinesVersion")
                implementation("io.ktor:ktor-client-core:$ktorVersion")
                implementation("io.ktor:ktor-client-serialization:$ktorVersion")

            }
        }
      //  val commonMain by getting
        val androidMain by getting {
            dependencies {
             //   implementation("org.jetbrains.kotlin:kotlin-stdlib-common")
             //   implementation("androidx.core:core-ktx:1.2.0")
             //  implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.3.9")
                implementation("io.ktor:ktor-client-android:$ktorVersion")

            }
        }
        val iosMain by getting {
            dependencies {

               // implementation("io.ktor:ktor-client-android:$ktorVersion")
                implementation("io.ktor:ktor-client-ios:$ktorVersion")

            }
        }

    }
}
android {


  //  publishLibraryVariants("release", "debug")

    compileSdkVersion(29)
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    defaultConfig {
        minSdkVersion(24)
        targetSdkVersion(29)
        versionCode = 1
        versionName = "1.0"
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
}
val packForXcode by tasks.creating(Sync::class) {
    group = "build"
    val mode = System.getenv("CONFIGURATION") ?: "DEBUG"
    val sdkName = "iphoneos";
        //System.getenv("SDK_NAME") ?: "iphonesimulator"
    val targetName = "ios" + if (sdkName.startsWith("iphoneos")) "Arm64" else "X64"
    val framework = kotlin.targets.getByName<KotlinNativeTarget>(targetName).binaries.getFramework(mode)
    inputs.property("mode", mode)
    dependsOn(framework.linkTask)
    val targetDir = File(buildDir, "xcode-frameworks")
    from({ framework.outputDirectory })
    into(targetDir)
}

tasks.getByName("build").dependsOn(packForXcode)