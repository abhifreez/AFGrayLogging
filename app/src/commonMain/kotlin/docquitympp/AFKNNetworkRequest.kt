package docquitympp

import io.ktor.client.HttpClient
import io.ktor.client.call.HttpClientCall
import io.ktor.client.call.call
import io.ktor.client.request.*
import io.ktor.client.response.readText
import io.ktor.http.HttpMethod
import kotlinx.coroutines.*


data class DCNetworkRequestHeader(
        var authKey: String = "",
        var iso_code: String = "",
        var apiVersion: String = "",
        var appVersion: String = "",
        var lang: String = "",
        var deviceType: String = "android",
        var tokenId: String = "",
        var authToken: String = "",
        var udid: String = ""
)

class AFKNBaseRequest {

    enum class RequestType {
        NEW, OLD
    }

    var HEADER_DATA: HashMap<String, Any>? = HashMap()
    private var COMMON_PARAMS: HashMap<String, Any>? = HashMap()
    private var RESPONCE_FORMAT: AFKNResponceFormat? = AFKNResponceFormat()
    var BASE_URL: String = ""

    companion object {
        fun getBaseRequest(type: RequestType): AFKNBaseRequest {
            var model = AFKNBaseRequest()
            when (type) {
                RequestType.NEW -> {
                    model.BASE_URL = DCKNManager.urls?.baseUrl!!

                    model.HEADER_DATA?.put("Authorization", DCKNManager.userInfo?.authorization!!)
                    model.HEADER_DATA?.put("lang", DCKNManager.userInfo?.lang!!)
                    model.HEADER_DATA?.put("userauthkey", DCKNManager.userInfo?.userAuthKey!!)

                    model.HEADER_DATA?.put("ver", DCKNManager.deviceInfo?.apiVersion!!)
                    model.HEADER_DATA?.put("appversion", DCKNManager.deviceInfo?.appVersion!!)
                    model.HEADER_DATA?.put("devicetype", DCKNManager.deviceInfo?.deviceType!!)
                    model.HEADER_DATA?.put("udid", DCKNManager.deviceInfo?.udid!!)

//                    model.BASE_URL = "http://dapi.docquity.com"
//                    model.HEADER_DATA?.put("Authorization", "Basic SDJPSDJTTzRPT0hDSDRIMk8yOg==")
//                    model.HEADER_DATA?.put("lang", "en")
//                    model.HEADER_DATA?.put("ver", "4.0")
//                    model.HEADER_DATA?.put("appversion", "87")
//                    model.HEADER_DATA?.put("devicetype", "android")
//                    model.HEADER_DATA?.put("userauthkey", "d64726112c82f3a8b7187a7610750036")
//                    model.HEADER_DATA?.put("udid", "pawanRequest")
                }

                RequestType.OLD -> {

                }
            }
            return model
        }
    }
}

class AFKNResponceFormat {
    var parentKey: String = ""
    var statussMsgKey: String = "msg"
    var statusCodeKey: String = "status"
    var successCodeKey: String = "code"
    var dataKey: String = "data"
    var errorObjectKey: String = "error"
    var sucessCodeValue: Int = 1
    var sucessCodeValueArray: List<Int> = listOf(1)
}


internal expect val ApplicationDispatcher: CoroutineDispatcher

class AFKNNetworkRequest {

    enum class AFKNNetworkRequestType {
        GET,
        POST,
        DELETE,
        MULTIPART,
        PUT
    }

    lateinit var BASE_REQUEST: AFKNBaseRequest;
    var PARAMS: HashMap<String, Any?> = hashMapOf()
    var API_URL: String = ""
    var REQUEST_TYPE: AFKNNetworkRequestType = AFKNNetworkRequestType.GET
    var RESPONCE_FORMAT: AFKNResponceFormat = AFKNResponceFormat()

    fun getRequestType(): HttpMethod {
        var methord: HttpMethod = HttpMethod.Get
        when (this.REQUEST_TYPE) {
            AFKNNetworkRequestType.GET -> methord = HttpMethod.Get
            AFKNNetworkRequestType.POST -> methord = HttpMethod.Post
            AFKNNetworkRequestType.DELETE -> methord = HttpMethod.Delete
            AFKNNetworkRequestType.PUT -> methord = HttpMethod.Put
            AFKNNetworkRequestType.MULTIPART -> methord = HttpMethod.Post
        }
        return methord
    }


    fun makeRequest(compilation: (response: AFKNNetworkResponse) -> Int) {

        GlobalScope.apply {
            launch(ApplicationDispatcher) {

                sequentialRequests(compilation = {
                    compilation(it)
                    return@sequentialRequests 1
                })

            }
        }

    }

    fun thirdPartyRequest(compilation: (response: AFKNNetworkResponse) -> Int, url: String, data: String) {


        GlobalScope.apply {
            launch(ApplicationDispatcher) {
                val client = HttpClient()
                val call: HttpClientCall = client.call(urlString = url) {
                }
                var responce = call.response;
                var res: AFKNNetworkResponse = AFKNNetworkResponse()

                var dataHashMap = AFKNPlatformUtil().getHashMapFromJsonString(responce.readText())
                res.RESPONCE_DATA = dataHashMap;
                println("=======" + dataHashMap)
                compilation(res);
            }
        }
    }


    suspend fun sequentialRequests(compilation: (response: AFKNNetworkResponse) -> Int) {

        val client = HttpClient()

        var currentObj = this

        val call = client.call(currentObj.BASE_REQUEST.BASE_URL + currentObj.API_URL) {
            method = currentObj.getRequestType()
            // contentType(ContentType.Application.Json)
            for ((key, value) in currentObj.BASE_REQUEST.HEADER_DATA?.iterator()!!) {
                headers.append(key, value as String)
            }
            for ((key, value) in currentObj.PARAMS?.iterator()!!) {
                parameter(key, value)
            }
            println("API Request" + client.attributes)
        }

        var responce = call.response

        /* var response:AFKNNetworkResponse = AFKNNetworkResponse();
         response.RESPONCE_SUCCESS_MSG = call.response.readText();
         compilation(response)*/

        // call.receive<Any>()
        var dataHashMap = AFKNPlatformUtil().getHashMapFromJsonString(responce.readText())
        println("=======" + dataHashMap)

        var response = AFKNNetworkResponse.parseHashMapForResponce(DCKNManager.context,
                this, dataHashMap)
        compilation(response)
        println("=======" + response)
    }
}

