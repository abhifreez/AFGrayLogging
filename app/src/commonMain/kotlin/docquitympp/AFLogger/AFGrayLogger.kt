package docquitympp.AFLogger

import docquitympp.AFKNNetworkRequest
import docquitympp.AFKNPlatformUtil


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



        var url = serverAddress;
        var request = AFKNNetworkRequest();
        var body = makeBody(AFLogger.appVersion,AFLogger.host,tag,msg.toString(),0,"debug")
        request.thirdPartyRequest(url = url, data = "", compilation = {

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


        var body = GelfModel(version,host,shrt_message,longMessage,lever,logType).toString();
        return body;
    }
}

class GelfModel(version: String,host: String,shrt_message: String,longMessage: String,lever: Int,logType: String){


}