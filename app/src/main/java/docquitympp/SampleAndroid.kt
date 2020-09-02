package docquitympp

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import docquitympp.model.DKLCordinates
import docquitympp.model.DKLocation


actual class Sample {
    actual fun checkMe() = 44


}

actual object Platform {
    actual val name: String = "Android"
}

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        hello()
//        Sample().checkMe()
//        var test = Test();
//        test.testRequest{
//            print(it)
//        }


//        DcDocCategoryBModel().getList {
////            AFKNPlatformUtil().log("getList ${it.size}")
//        }

      /*  var docTalk = DocTalkBModel()
        docTalk.getDetails {
            print(it)

        }*/

        var loc = DKLocation.getAddressForCordinates(DKLCordinates(28.7041, longitude = 77.1025)) {

            return@getAddressForCordinates 1
        }


        setContentView(R.layout.activity_main)

    }


}



actual object AFPlatformLogger {
    actual fun debug(obj: Any, tag: String) {
    }

    actual fun error(obj: Any, tag: String) {
    }

    actual fun warning(obj: Any, tag: String) {
    }

    actual fun info(obj: Any, tag: String) {
    }


}