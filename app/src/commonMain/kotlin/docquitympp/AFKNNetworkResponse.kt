package docquitympp


/*
public enum actionType:String{

    case alert = "alert"
    case silent = "silent"
    case nofification = "nofification"
    case navigate = "navigate"
    case none = "none"

    static func parse(type:String) -> actionType {
        switch type {

            case "alert" : return .alert
            case "silent" : return .silent
            case "nofification" : return .nofification
            case "navigate" : return .navigate

            default: return .none
        }
    }

}*/

class AFKNNetworkResponse {

    var RESPONCE_STATUS_CODE: Int = 0
    var RESPONCE_SUCCESS_MSG: String = ""
    var IS_SUCCESS: Int = 0
    var ERROR: AFKNError? = null
    var RESPONCE_DATA: Any? = null
    // var RESPONCE_RAW_DATA:?=null
    // var RESPONCE_ACTION:DCNFAction?=nil;


    companion object {

        fun parseHashMapForResponce(context: Any?, request: AFKNNetworkRequest, data: Map<String, Any>): AFKNNetworkResponse {
            print("============1")
            var response = AFKNNetworkResponse()
            var responseFormat = request.RESPONCE_FORMAT
            // response.IS_SUCCESS = data.get(responseFormat.statusCodeKey) as Int;
            var statusCode = data.get(responseFormat.statusCodeKey) as Int
            response.RESPONCE_STATUS_CODE = statusCode

            when (statusCode) {
                AFKNConstant.RESPONSE_CODE_SUCCESS -> {
                    response.IS_SUCCESS = 1
                    response.RESPONCE_SUCCESS_MSG = data.get(responseFormat.statussMsgKey) as String
                    response.RESPONCE_DATA = data.get(responseFormat.dataKey)
                }

                AFKNConstant.RESPONSE_CODE_ERROR -> {
                    var error = AFKNError()
                    var errorResponse = data.get(responseFormat.errorObjectKey) as Map<String, Any>
                    error.ERROR_CODE = errorResponse.get("code") as Int
                    error.ERROR_MESSAGE = data.get("msg") as String
                    error.ERROR_DATA = data.get("data")

                    response.ERROR = error
                }

                AFKNConstant.RESPONSE_CODE_EXIT_APP -> {
                    DCBroadcastUtils().sendBroadcast(context)
                }

                AFKNConstant.RESPONSE_CODE_SHOW_READ_ONLY_DIALOG -> {
                    DCBroadcastUtils().sendBroadcast(context)
                }

                else -> {
                    DCBroadcastUtils().sendBroadcast(context)
                }
            }
            print("============1")
            return response;
        }
    }
}

class AFKNError {
    var ERROR_CODE: Int = 0
    var ERROR_MESSAGE: String? = ""
    var ERROR_DATA: Any? = null
}


/*
public class DCNFAction : NSObject{

    public var TYPE: actionType?
    public var PARAM: Array<DCNFParam>?
    public var PROCESS: Array<DCNFProcess>?
}*/

/*
public class DCNFParam : NSObject{

    public var KEY: String?
    public var VALUE: String?

}*/

/*
public class DCNFTarget: NSObject{

    public var TYPE: String?
    public var ID: String?
    public var URL: String?
}*/

/*
public class DCNFProcess: NSObject{

    public var TYPE: String?
    public var TARGET: Array<DCNFTarget>?
    public var PARAM: Array<DCNFParam>?
}
*/
