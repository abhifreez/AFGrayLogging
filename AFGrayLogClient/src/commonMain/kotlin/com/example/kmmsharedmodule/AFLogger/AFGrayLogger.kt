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

    fun getLogTypeName(logLevel:LogLevel):String{

        when (logLevel){
            LogLevel.DEBUG -> return "DEBUG";
            LogLevel.ERROR -> return "ERROR";
            LogLevel.INFO -> return "INFO";
            LogLevel.WARNING -> return "WARNING";
        }
    }

    internal var serverAddress:String = ""

    fun setServerAddress(url: String){
        serverAddress = url;
    }

    fun remoteLog(loglevel:LogLevel,msg:Any,tag:String,trackId:String,appInfo:AFLoggerInfo){




        var url = serverAddress;
        var request = AFKNNetworkRequest();
        var body = makeBody(appInfo.appVersion,appInfo.host,tag,msg.toString().replace("\"","\'"),loglevel.level,getLogTypeName(loglevel),trackId=trackId)

        request.thirdPartyRequest(url = url, data = body, compilation = {


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
            "track_id":""""+trackId+""""   
            }""";

        //AFPlatformLogger.debug(bodyString,"test string");
        val jsonString = bodyString;
        return jsonString;
    }

    fun getDebugType(debugLevel:Int){

    }



}

class GelfModel(version: String,host: String,shrt_message: String,longMessage: String,lever: Int,logType: String){


}