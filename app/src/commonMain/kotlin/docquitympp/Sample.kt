package docquitympp


expect class Sample() {
    fun checkMe(): Int
}

expect class AFKNPlatformUtil() {
    fun getHashMapFromJsonString(string: String): Map<String, Any>
    fun log(obj:Any)
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


expect object Platform {
    val name: String
}

fun hello(): String = "Hello from ${Platform.name}"

class Proxy {
    fun proxyHello() = hello()
}

fun main(args: Array<String>) {
    println(hello())
}

