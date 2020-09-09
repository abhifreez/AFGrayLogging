package com.example.afloggingtestapp

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle

import com.example.kmmsharedmodule.Greeting;
import com.example.kmmsharedmodule.AFLoging;
//import com.example.k




class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        Greeting().greeting();

        var log = AFLoging(true,true,"1545623","1.0","abc.com","http://52.221.245.216:12201/gelf")
        log.debug("Logging is \"working","AppCompatActivity");


    }
}