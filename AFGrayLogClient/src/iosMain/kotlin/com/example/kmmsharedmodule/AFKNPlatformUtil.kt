package com.example.kmmsharedmodule

import kotlinx.wasm.jsinterop.Object
import platform.Foundation.*







actual class AFKNPlatformUtil actual constructor() {

    actual fun getHashMapFromJsonString(string: String): Map<String, Any>{

        println("String to be converted ==>"+string)

       var stringData = (string as? NSString)?.dataUsingEncoding(NSUTF8StringEncoding)



       var dict : NSDictionary = NSJSONSerialization.JSONObjectWithData(stringData as NSData,NSJSONReadingMutableContainers,null) as NSDictionary;

        println("NSDictionary  form String ==>"+dict)

        var map = getMapFormDict(dict).toMap()

        println("Mutable map to map  ==>"+map)


        return  map;



    }

    fun getMapFormDict(dict:NSDictionary):MutableMap<String,Any>{


        var keys = dict.allKeys()
        var map = mutableMapOf<String,Any>()

        println("NSDictionary  to Map Started ==>")
        for (key in keys){

            var value = dict.objectForKey(key)
            if(value is NSDictionary) {
                map.put((key as String), getMapFormDict(value))
            }

            map.put((key as String),dict.objectForKey(key) as Any)


        }
        println("NSDictionary  to Map Completed ==>")
        return map;

    }

    actual fun log(obj: Any){

        if((obj as? String) != null){
            println(obj as String)
        }

        //NSLog("Kotlin Native %@", "Logging Working")
    }


}