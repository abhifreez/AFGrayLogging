package com.example.kmmsharedmodule




actual class Sample {
    actual fun checkMe() = 7







}






actual object AFPlatformLogger {


    actual fun debug(obj: Any, tag: String) {
    }

    actual fun error(obj: Any, tag: String) {
    }

    actual fun warning(obj: Any, tag: String) {
    }

    actual fun info(obj: Any, tag: String) {
    }


}