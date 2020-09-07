package com.example.kmmsharedmodule

import   com.example.kmmsharedmodule.AFKNNetworkRequest
import   com.example.kmmsharedmodule.AFKNPlatformUtil
import   com.example.kmmsharedmodule.AFPlatformLogger



class AFGrayLogger {

   enum class LogLevel(val level: Int) {
       DEBUG(0),
       ERROR(1),
       INFO(2),
       WARNING(3)

   }
    internal var serverAddress:String = ""

    fun setServerAddress(url: String){
        serverAddress = url;
    }

    fun remoteLog(loglevel:LogLevel,msg:Any,tag:String,trackId:String){

        AFPlatformLogger.debug("we are testing","Api Response")

        var url = serverAddress;
        var request = AFKNNetworkRequest();
        var body = makeBody(AFLoggerInfo.appVersion,AFLoggerInfo.host,tag,msg.toString(),loglevel.level,"debug",trackId=trackId)
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

    fun  makeBody(version:String, host:String, shrt_message:String, longMessage:String, level:Int, logType:String,trackId:String): String {


        var body = GelfModel(version,host,shrt_message,longMessage,level,logType);
        var bodyString = """{ 
            "version ": """"+version+"""", 
            "host": """"+host+"""", 
            "short_message": """"+shrt_message+"""",
            "level": """+level+""", 
            "some_info":""""+longMessage+"""",
            "log_type":""""+logType+"""",
            "track_id":"""+trackId+""",   
            }""".trimMargin()

        AFPlatformLogger.debug("body string",bodyString) ;
        val jsonString = bodyString;
        return jsonString;
    }

    fun getDebugType(debugLevel:Int){

    }



}

class GelfModel(version: String,host: String,shrt_message: String,longMessage: String,lever: Int,logType: String){


}