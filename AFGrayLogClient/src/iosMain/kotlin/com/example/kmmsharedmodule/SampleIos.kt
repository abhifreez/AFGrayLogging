package com.example.kmmsharedmodule

import platform.Foundation.*


actual class Sample {
    actual fun checkMe() = 7







}






actual object AFPlatformLogger {


    actual fun debug(obj: Any, tag: String) {

        NSLog(tag,obj)

    }

    actual fun error(obj: Any, tag: String) {
        NSLog(tag,obj)
    }

    actual fun warning(obj: Any, tag: String) {
        NSLog(tag,obj)
    }


    actual fun info(obj: Any, tag: String) {
        NSLog(tag,obj)
    }


}