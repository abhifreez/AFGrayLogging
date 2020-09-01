package docquitympp


class DocTalkBModel {

    var id: Int? = 0
    var type: Any? = ""

    fun getDetails(block: (DocTalkBModel) -> Unit) {
        var params = HashMap<String, Any?>()
        params.put("lesson_id", 487)
        params.put("type", "download")
        var request = AFKNNetworkRequest()
        var baseRequest = AFKNBaseRequest.getBaseRequest(AFKNBaseRequest.RequestType.NEW)
        request.BASE_REQUEST = baseRequest
        request.API_URL = "/4.0/cme/detail?"
        request.PARAMS = params


        request.makeRequest {
            var docTlk:DocTalkBModel =  DocTalkBModel()
            docTlk.type =((it.RESPONCE_DATA as Map<String,Any>).get("course") as  Map<String,Any>).get("course_name")
                    //it.RESPONCE_DATA.toString()

            block(docTlk)
           return@makeRequest 1;
        }

    }
}