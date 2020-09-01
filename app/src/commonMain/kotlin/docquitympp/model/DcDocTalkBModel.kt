package docquitympp

import docquitympp.model.*


class DcDocTalkBModel() {

    var id: Int? = 0
    var title: String? = ""
    var description: String? = ""
    var publishData: Long? = 0
    var commentFlag: Boolean? = true
    var episodeIndex: Int? = 0
    var speakerList: MutableList<DCSpeakerBModel>? = mutableListOf()
    var series: DKDTSeries? = null
    var isSeries: Boolean? = false
    var likeCount: Int? = 0
    var viewsCount: Int? = 0
    var isLiked: Boolean? = false
    var isBookmarked: Boolean? = false
    var mediaList: MutableList<AFKNMediaBModel>? = mutableListOf()
    var shareData: AFKNShareBModel? = null
    var summery: String? = ""
    var episodesList: MutableList<DcDocTalkBModel>? = mutableListOf()


    constructor(jsonDict: Map<String, Any>?) : this() {
        id = jsonDict?.get("doctalks_id") as? Int
        title = jsonDict?.get("title") as? String
        description = jsonDict?.get("description") as? String
//        publishData = jsonDict?.get("publish_date") as Long
        commentFlag = jsonDict?.get("comment_flag") as? Boolean
        episodeIndex = jsonDict?.get("episode_index") as Int
        speakerList =
            DCSpeakerBModel.parseSpeakerList(dataList = jsonDict?.get("speaker") as? MutableList<Map<String, Any>>)
        series = DKDTSeries(jsonDict = jsonDict?.get("series") as? Map<String, Any>)
        isSeries = jsonDict?.get("is_series") as? Boolean
        isLiked = jsonDict?.get("is_liked") as? Boolean
        isBookmarked = jsonDict?.get("is_bookmarks") as? Boolean
        mediaList = AFKNMediaBModel.parseMediaList(dataList = jsonDict?.get("media") as? MutableList<Map<String, Any>>)
    }

    fun bookmark(block: (Boolean) -> Unit) {
        var bookmarkNewValue = isBookmarked?.not()
        var params = HashMap<String, Any?>()
        params.put("product_type", "docktalk")
        params.put("product_type_id", id)
        params.put("action", bookmarkNewValue)

        var request = AFKNNetworkRequest()
        var baseRequest = AFKNBaseRequest.getBaseRequest(AFKNBaseRequest.RequestType.NEW)
        request.REQUEST_TYPE = AFKNNetworkRequest.AFKNNetworkRequestType.POST
        request.BASE_REQUEST = baseRequest
        request.API_URL = AFKNConstant.ADD_BOOKMARK
        request.PARAMS = params


        request.makeRequest {
            var code = it.IS_SUCCESS

            if (code == 1)
                block(bookmarkNewValue!!)
            else
                block(bookmarkNewValue?.not()!!)
            return@makeRequest 1
        }
    }

    fun like(block: (Boolean) -> Unit) {
        var params = HashMap<String, Any?>()
        params.put("product_type", "docktalk")
        params.put("product_type_id", id)
        params.put("action", "like")

        var request = AFKNNetworkRequest()
        var baseRequest = AFKNBaseRequest.getBaseRequest(AFKNBaseRequest.RequestType.NEW)
        request.BASE_REQUEST = baseRequest
        request.REQUEST_TYPE = AFKNNetworkRequest.AFKNNetworkRequestType.POST
        request.API_URL = AFKNConstant.POST_LIKE
        request.PARAMS = params


        request.makeRequest {
            var code = it.IS_SUCCESS
            if (code == 1)
                block(true)
            else
                block(false)
            return@makeRequest 1
        }
    }

    fun getDoctalkDetail(id: Int, block: (DcDocTalkBModel) -> Unit) {
        var params = HashMap<String, Any?>()
        params.put("doctalks_id", id)

        var request = AFKNNetworkRequest()
        var baseRequest = AFKNBaseRequest.getBaseRequest(AFKNBaseRequest.RequestType.NEW)
        request.BASE_REQUEST = baseRequest
        request.REQUEST_TYPE = AFKNNetworkRequest.AFKNNetworkRequestType.GET
        request.API_URL = AFKNConstant.DOC_TALK_DETAIL
        request.PARAMS = params
        AFKNPlatformUtil().log("Doctalk get Detail Called")
        request.makeRequest { response: AFKNNetworkResponse ->
            var code = response.IS_SUCCESS
            if (code == 1) {
                AFKNPlatformUtil().log("Doctalk get Detail on Success Response")
                var data = (response.RESPONCE_DATA as? Map<String, Any>)
                block(parseFullDetails(data))
                AFKNPlatformUtil().log("Doctalk get Detail on Parsing Done")
            } else {
                AFKNPlatformUtil().log("Doctalk get Detail on Error Response code $code")
            }
            return@makeRequest 0
        }
    }

    fun parseFullDetails(response: Map<String, Any>?): DcDocTalkBModel {
        var docTalkModel = response?.get("doctalks") as? Map<String, Any>
        var model = parseDetailModel(docTalkModel)
        var list = response?.get("series_episode") as? MutableList<Map<String, Any>>
        for (item in list!!) {
            var episode = parseDetailModel(item)
            model.episodesList?.add(episode)
        }
        return model
    }

    fun parseDetailModel(response: Map<String, Any>?): DcDocTalkBModel {
        var model = DcDocTalkBModel(response)
        model.summery = response?.get("summary") as? String
        model.likeCount = response?.get("like") as? Int
        model.viewsCount = response?.get("views") as? Int
        model.shareData = AFKNShareBModel(response?.get("share") as? Map<String, Any>?)
        return model
    }
}