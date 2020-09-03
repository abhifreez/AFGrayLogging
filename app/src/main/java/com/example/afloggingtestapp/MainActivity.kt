package com.example.afloggingtestapp

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
//import com.example.kmmsharedmodule.Greeting
import com.example.kmmsharedmodule.*



class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        Greeting().greeting();
        AFLogger.setLocalLogging(true);
        AFLogger.setRemoteLogging(true);
        AFLogger.setServerAddress("http://34.204.182.58:12201/gelf")
        AFLogger.debug("test Msg",tag = "test Tag")

    }
}