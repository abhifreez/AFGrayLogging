package com.example.kmmsharedmodule

import  com.example.kmmsharedmodule.AFKNPlatformUtil
import  com.example.kmmsharedmodule.AFPlatformLogger


object AFLoggerInfo{

    internal var appVersion:String = "";
    internal var host:String = "";





}


class AFLoging {

    private var isLocalLoggingEnable: Boolean = false;
    private var isRemoteLoggingEnable: Boolean = false;
    private var trackId: String = "";
    private lateinit var grayLog:AFGrayLogger;




    constructor(isLocalLoggingEnable: Boolean,isRemoteLoggingEnable: Boolean,trackId: String,appVersion:String,host:String,serverAddess:String){

       this.isLocalLoggingEnable = isLocalLoggingEnable;
       this.isRemoteLoggingEnable = isRemoteLoggingEnable;
       this.trackId = trackId;
        this.grayLog = AFGrayLogger();
        this.grayLog.setServerAddress(serverAddess);



   }
    init {

    }

    fun setParams(){
        AFPlatformLogger.debug("set Parama Workinf", "tag ");
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

    fun debug(msg: Any, tag: String) {
        if (isLocalLoggingEnable) {
            AFPlatformLogger.debug(msg, tag);
        }
        if (isRemoteLoggingEnable) {

            grayLog.remoteLog(AFGrayLogger.LogLevel.DEBUG, msg, tag, trackId)

        }

    }

    fun error(msg: Any, tag: String) {
        if (isLocalLoggingEnable) {
            AFPlatformLogger.debug(msg, tag);
        }
        if (isRemoteLoggingEnable) {

            grayLog.remoteLog(AFGrayLogger.LogLevel.DEBUG, msg, tag, trackId)

        }

    }
    fun info(msg: Any, tag: String) {
        if (isLocalLoggingEnable) {
            AFPlatformLogger.debug(msg, tag);
        }
        if (isRemoteLoggingEnable) {

            grayLog.remoteLog(AFGrayLogger.LogLevel.DEBUG, msg, tag, trackId)

        }

    }
    fun warnning(msg: Any, tag: String) {
        
        if (isLocalLoggingEnable) {
            AFPlatformLogger.debug(msg, tag);
        }
        if (isRemoteLoggingEnable) {

            grayLog.remoteLog(AFGrayLogger.LogLevel.DEBUG, msg, tag, trackId)

        }

    }
}



