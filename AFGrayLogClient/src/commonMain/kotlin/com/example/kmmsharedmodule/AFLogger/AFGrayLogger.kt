package com.example.kmmsharedmodule

import   com.example.kmmsharedmodule.AFKNNetworkRequest
import   com.example.kmmsharedmodule.AFKNPlatformUtil
import   com.example.kmmsharedmodule.AFPlatformLogger



object AFGrayLogger {

   enum class LogLevel {
       DEBUG,
       ERROR,
       INFO,
       WARNING

   }
    internal var serverAddress:String = ""

    fun setServerAddress(url: String){
        serverAddress = url;
    }

    fun remoteLog(loglevel:LogLevel,msg:Any,tag:String){

        AFPlatformLogger.debug("we are testing","Api Response")

        var url = serverAddress;
        var request = AFKNNetworkRequest();
        var body = makeBody(AFLogger.appVersion,AFLogger.host,tag,msg.toString(),0,"debug")
        AFPlatformLogger.debug(body,"Api Body")
        AFPlatformLogger.debug(url,"Api Url")
        request.thirdPartyRequest(url = url, data = body, compilation = {

            AFPlatformLogger.debug(it,"Api Response")
            println("Recived Responce Form Ntwork To Model")

            AFKNPlatformUtil().log("Recived Responce Form Ntwork To Model")

//            var address = DKLAddress(it.RESPONCE_DATA as? Map<Any, Any>);
//
//            AFKNPlatformUtil().log("Conversion sucess")
//            complition(address)

            return@thirdPartyRequest 0;
        })




    }

    fun  makeBody(version:String,host:String,shrt_message:String,longMessage:String,lever:Int,logType:String): String {


        var body = GelfModel(version,host,shrt_message,longMessage,lever,logType);
        var bodyString = """{ "version ": "1.1", "host": "kotlin.org2", "short_message": "A short message", "level": 5, "_some_info": "foo","log_type":"debug"}"""
        AFPlatformLogger.debug("body string",bodyString) ;
        val jsonString = bodyString;
        return jsonString;
    }
}

class GelfModel(version: String,host: String,shrt_message: String,longMessage: String,lever: Int,logType: String){


}