package com.example.kmmsharedmodule

import platform.Foundation.*


actual class Sample {
    actual fun checkMe() = 7







}


actual object AFPlatformLogger {

    fun getMsgFormat(type:String,tag: String,obj: Any):String{
        return "Debug Type:"+type+" Tag:"+tag+" Msg:"+(obj as? String) ;
    }

    actual fun debug(obj: Any, tag: String) {

        NSLog(getMsgFormat("Debug",tag,obj));

    }

    actual fun error(obj: Any, tag: String) {
        NSLog(getMsgFormat("Error",tag,obj));
    }

    actual fun warning(obj: Any, tag: String) {
        NSLog(getMsgFormat("Warning",tag,obj));
    }


    actual fun info(obj: Any, tag: String) {
        NSLog(getMsgFormat("Info",tag,obj));
    }


}