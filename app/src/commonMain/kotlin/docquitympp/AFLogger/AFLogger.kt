package docquitympp.AFLogger

import docquitympp.AFKNPlatformUtil
import docquitympp.AFPlatformLogger


object AFLogger {

   private var isLocalLoggingEnable:Boolean = false;
   private var isRemoteLoggingEnable:Boolean = false;

    internal var appVersion:String = "0";
    internal var host:String = "kotlin Native";



    fun setLocalLogging(isEnable:Boolean){

        isLocalLoggingEnable = isEnable;

    }

    fun setServerAddress(url: String){
       AFGrayLogger.setServerAddress(url)
    }

    fun setRemoteLogging(isEnable:Boolean){

        isRemoteLoggingEnable = isEnable;
    }

    fun debug(msg:Any,tag:String){
        if(isLocalLoggingEnable){
            AFPlatformLogger.debug(msg,tag);
        }
        if(isRemoteLoggingEnable){

            AFGrayLogger.remoteLog( AFGrayLogger.LogLevel.DEBUG,msg,tag)

        }

    }




}