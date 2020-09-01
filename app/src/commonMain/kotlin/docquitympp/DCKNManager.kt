package docquitympp

import docquitympp.model.DCKNDeviceInfo
import docquitympp.model.DCKNUrls
import docquitympp.model.DCKNUserInfo

object DCKNManager {

    var context: Any? = null
    var urls: DCKNUrls? = DCKNUrls()
    var userInfo: DCKNUserInfo? = DCKNUserInfo()
    var deviceInfo: DCKNDeviceInfo? = DCKNDeviceInfo()

    fun configureAppContext(appContext: Any?) {
        context = appContext
    }

    fun configureUrls(url: String? = "") {
        urls?.baseUrl = url!!
    }

    fun configureUserInfo(lang: String?,
                          authorization: String?,
                          userauthkey: String?) {
        userInfo?.lang = lang
        userInfo?.authorization = authorization
        userInfo?.userAuthKey = userauthkey
    }

    fun configureDeviceInfo(apiVersion: String?,
                            appVersion: String?,
                            deviceType: String?,
                            udid: String?) {
        deviceInfo?.apiVersion = apiVersion
        deviceInfo?.appVersion = appVersion
        deviceInfo?.deviceType = deviceType
        deviceInfo?.udid = udid
    }

}