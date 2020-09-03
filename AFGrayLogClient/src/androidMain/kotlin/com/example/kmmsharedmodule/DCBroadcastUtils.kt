package com.example.kmmsharedmodule

import android.content.Context
import android.content.Intent
//import android.support.v4.content.LocalBroadcastManager
import java.io.Serializable

actual class DCBroadcastUtils actual constructor() {
    actual fun sendBroadcast(context: Any?, intentType: String?, broadcastKey: Int?, broadcastValue: Any?, forId: Int?) {
        val intent = Intent(intentType)
        intent.putExtra("broadcastForKey", broadcastKey)
        intent.putExtra("broadcastValue", broadcastValue as Serializable)
        intent.putExtra("broadcastForId", forId)
      //  LocalBroadcastManager.getInstance(context as Context).sendBroadcast(intent)
    }
}