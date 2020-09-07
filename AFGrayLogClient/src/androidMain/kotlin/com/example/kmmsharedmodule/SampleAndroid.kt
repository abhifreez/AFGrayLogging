package com.example.kmmsharedmodule


import android.os.Bundle
import android.util.Log



actual class Sample {
    actual fun checkMe() = 44


}




actual object AFPlatformLogger {
    actual fun debug(obj: Any, tag: String) {

        Log.d(tag,obj.toString());
    }

    actual fun error(obj: Any, tag: String) {
        Log.e(tag,obj.toString());
    }

    actual fun warning(obj: Any, tag: String) {
        Log.w(tag,obj.toString());
    }

    actual fun info(obj: Any, tag: String) {
        Log.i(tag,obj.toString());
    }


}

