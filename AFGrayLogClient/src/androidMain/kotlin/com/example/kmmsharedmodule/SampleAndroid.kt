package com.example.kmmsharedmodule


import android.os.Bundle
import android.util.Log



actual class Sample {
    actual fun checkMe() = 44


}




actual object AFPlatformLogger {
    actual fun debug(obj: Any, tag: String) {

        Log.d(obj.toString(),tag);
    }

    actual fun error(obj: Any, tag: String) {
    }

    actual fun warning(obj: Any, tag: String) {
    }

    actual fun info(obj: Any, tag: String) {
    }


}

