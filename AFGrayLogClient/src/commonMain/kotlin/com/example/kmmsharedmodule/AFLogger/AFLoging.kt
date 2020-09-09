package com.example.kmmsharedmodule

import  com.example.kmmsharedmodule.AFKNPlatformUtil
import  com.example.kmmsharedmodule.AFPlatformLogger
import  com.example.kmmsharedmodule.AFLoggerInfo;

class AFLoggerInfo{

    internal var appVersion:String = "";
    internal var host:String = "";

}


class AFLoging {

    private var isLocalLoggingEnable: Boolean = false;
    private var isRemoteLoggingEnable: Boolean = false;
    private var trackId: String = "";
    private lateinit var grayLog:AFGrayLogger;
    private lateinit var loggerInfo:AFLoggerInfo;




    constructor(isLocalLoggingEnable: Boolean,isRemoteLoggingEnable: Boolean,trackId: String,appVersion:String,host:String,serverAddess:String){

       this.isLocalLoggingEnable = isLocalLoggingEnable;
       this.isRemoteLoggingEnable = isRemoteLoggingEnable;
       this.trackId = trackId;
        this.grayLog = AFGrayLogger();
        this.grayLog.setServerAddress(serverAddess);

          this.loggerInfo = AFLoggerInfo();
        this.loggerInfo.appVersion = appVersion;
        this.loggerInfo.host = host;





   }
    init {

    }


    fun setLocalLogging(isEnable: Boolean) {

        isLocalLoggingEnable = isEnable;


    }

    fun setTrackId(trackId: String) {

        this.trackId = trackId;

    }

    fun setServerAddress(url: String) {
        this.grayLog.setServerAddress(url)
    }

    fun setRemoteLogging(isEnable: Boolean) {

        isRemoteLoggingEnable = isEnable;
    }

    fun debug(msg: String, tag: String) {
        if (isLocalLoggingEnable) {
            AFPlatformLogger.debug(msg, tag);
        }
        if (isRemoteLoggingEnable) {

            grayLog.remoteLog(AFGrayLogger.LogLevel.DEBUG, msg, tag, trackId,this.loggerInfo)

        }

    }

    fun error(msg: String, tag: String) {
        if (isLocalLoggingEnable) {
            AFPlatformLogger.error(msg, tag);
        }
        if (isRemoteLoggingEnable) {

            grayLog.remoteLog(AFGrayLogger.LogLevel.ERROR, msg, tag, trackId,this.loggerInfo)

        }

    }
    fun info(msg: String, tag: String) {
        if (isLocalLoggingEnable) {
            AFPlatformLogger.info(msg, tag);
        }
        if (isRemoteLoggingEnable) {

            grayLog.remoteLog(AFGrayLogger.LogLevel.INFO, msg, tag, trackId,this.loggerInfo)

        }

    }
    fun warning(msg: String, tag: String) {

        if (isLocalLoggingEnable) {
            AFPlatformLogger.warning(msg, tag);
        }
        if (isRemoteLoggingEnable) {

            grayLog.remoteLog(AFGrayLogger.LogLevel.WARNING, msg, tag, trackId,this.loggerInfo)

        }

    }
}



