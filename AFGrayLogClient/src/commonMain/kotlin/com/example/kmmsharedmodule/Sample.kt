package com.example.kmmsharedmodule


expect class Sample() {
    fun checkMe(): Int
}

expect class AFKNPlatformUtil() {
    fun getHashMapFromJsonString(string: String): Map<String, Any>
    fun log(obj:Any)

}

expect object AFPlatformLogger {
    fun debug(obj:Any,tag:String)
    fun error(obj: Any,tag:String)
    fun warning(obj: Any,tag:String)
    fun info(obj: Any,tag:String)

}

expect class DCBroadcastUtils() {
    fun sendBroadcast(context: Any?=null, intentType: String? = "", broadcastKey: Int? = 0,
                      broadcastValue: Any? = null, forId: Int? = 0)
}


class Test() {


    fun testRequest(block: (Int) -> Unit) {

        var request = AFKNNetworkRequest();
        // request.makeRequest()
        block(5);

    }


}




fun hello(): String = "Hello from test"

class Proxy {
    fun proxyHello() = hello()
}

fun main(args: Array<String>) {
    println(hello())
}

