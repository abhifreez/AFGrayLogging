package docquitympp

import android.util.Log
import org.json.JSONObject
import org.json.JSONException
import org.json.JSONArray





actual  class AFKNPlatformUtil actual constructor() {


    actual fun  log(obj:Any){

        Log.e("Kotlin Native",obj.toString())

    }

    actual fun getHashMapFromJsonString(string: String): Map<String, Any>{
        Log.e("AFKNPlatformUtil","Executed")

        return  jsonToMap(JSONObject(string))


//        JSONObject(string)




    }

   /* @Throws(JSONException::class)
    fun jsonToMap(t: String):HashMap<String,Any> {

        val map = HashMap<String, Any>()
        val jObject = JSONObject(t)
        val keys = jObject.keys()

        while (keys.hasNext()) {
            val key = keys.next() as String
            val value = jObject.get(key)
            map[key] = value

        }
        return map;

        println("json : $jObject")
        println("map : $map")
    }*/
   @Throws(JSONException::class)
   fun jsonToMap(json: JSONObject): Map<String, Any> {
       var retMap: Map<String, Any> = HashMap()

       if (json !== JSONObject.NULL) {
           retMap = toMap(json)
       }
       return retMap
   }

    @Throws(JSONException::class)
    fun toMap(`object`: JSONObject): Map<String, Any> {
        val map = HashMap<String, Any>()

        val keysItr = `object`.keys()
        while (keysItr.hasNext()) {
            val key = keysItr.next()
            var value = `object`.get(key)

            if (value is JSONArray) {
                value = toList(value)
            } else if (value is JSONObject) {
                value = toMap(value)
            }
            map[key] = value
        }
        return map
    }

    @Throws(JSONException::class)
    fun toList(array: JSONArray): List<Any> {
        val list = ArrayList<Any>()
        for (i in 0 until array.length()) {
            var value = array.get(i)
            if (value is JSONArray) {
                value = toList(value)
            } else if (value is JSONObject) {
                value = toMap(value)
            }
            list.add(value)
        }
        return list
    }

    actual fun error(obj: Any) {
    }


}

