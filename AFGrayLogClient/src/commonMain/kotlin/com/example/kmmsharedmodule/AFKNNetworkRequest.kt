package com.example.kmmsharedmodule

import io.ktor.client.HttpClient
import io.ktor.client.call.HttpClientCall
import io.ktor.client.call.call
import io.ktor.client.request.*
import io.ktor.client.response.readText
import io.ktor.http.HttpMethod
import kotlinx.coroutines.*








expect val ApplicationDispatcher: CoroutineDispatcher

class AFKNNetworkRequest {






    fun thirdPartyRequest(compilation: (response: Any) -> Int, url: String, data: String) {


        GlobalScope.apply {
            launch(ApplicationDispatcher) {




                val client = HttpClient()
                val message = client.post<String> {
                    url(url)
                   // contentType(ContentType.Application.Json)
                    body = data
                }

                println("CLIENT: Message from the server: $message")

                client.close()



            }
        }
    }


//    suspend fun sequentialRequests(compilation: (response: AFKNNetworkResponse) -> Int) {
//
//        val client = HttpClient()
//
//        var currentObj = this
//
//        val call = client.call(currentObj.BASE_REQUEST.BASE_URL + currentObj.API_URL) {
//            method = currentObj.getRequestType()
//            // contentType(ContentType.Application.Json)
//            for ((key, value) in currentObj.BASE_REQUEST.HEADER_DATA?.iterator()!!) {
//                headers.append(key, value as String)
//            }
//            for ((key, value) in currentObj.PARAMS?.iterator()!!) {
//                parameter(key, value)
//            }
//            println("API Request" + client.attributes)
//        }
//
//        var responce = call.response
//
//        /* var response:AFKNNetworkResponse = AFKNNetworkResponse();
//         response.RESPONCE_SUCCESS_MSG = call.response.readText();
//         compilation(response)*/
//
//        // call.receive<Any>()
//        var dataHashMap = AFKNPlatformUtil().getHashMapFromJsonString(responce.readText())
//        println("=======" + dataHashMap)
//
//        var response = AFKNNetworkResponse.parseHashMapForResponce(DCKNManager.context,
//                this, dataHashMap)
//        compilation(response)
//        println("=======" + response)
//    }
}

