package docquitympp




actual class Sample {
    actual fun checkMe() = 7







}



actual object Platform {
    actual val name: String = "iOS"
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