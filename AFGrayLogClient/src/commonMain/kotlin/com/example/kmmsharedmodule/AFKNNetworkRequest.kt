package com.example.kmmsharedmodule

import io.ktor.client.HttpClient
import io.ktor.client.call.HttpClientCall
import io.ktor.client.call.call
import io.ktor.client.request.*
import io.ktor.client.response.readText
import io.ktor.http.HttpMethod
import kotlinx.coroutines.*
import com.example.kmmsharedmodule.AFPlatformLogger








expect val ApplicationDispatcher: CoroutineDispatcher

class AFKNNetworkRequest {


    fun thirdPartyRequest(compilation: (response: Any) -> Int, url: String, data: String) {


        GlobalScope.apply {
            launch(ApplicationDispatcher) {


                val client = HttpClient()
                try {
                    // some code
                    val message = client.post<String> {
                        url(url)
                        // contentType(ContentType.Application.Json)
                        body = data
                    }
                }
                catch (e: Exception) {
                    // handler
                    AFPlatformLogger.error("""Logging Failed :${e.message}""","Logging Api Failed");
                }
                finally {
                    // optional finally block
                    client.close()
                }


                // println("CLIENT: Message from the server: $message")




            }
        }
    }


}

