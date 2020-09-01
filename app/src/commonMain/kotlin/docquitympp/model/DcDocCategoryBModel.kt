package docquitympp.model

import docquitympp.*

class DcDocCategoryBModel {
    var categoryTitle: String? = ""
    var categoryId: Int? = 0
    var dataList: MutableList<Any>? = mutableListOf()
    var categoryType: String? = ""

    fun getList(block: (MutableList<DcDocCategoryBModel>) -> Unit) {
        var params = HashMap<String, Any?>()
        var request = AFKNNetworkRequest()
        var baseRequest = AFKNBaseRequest.getBaseRequest(AFKNBaseRequest.RequestType.NEW)
        request.BASE_REQUEST = baseRequest
        request.REQUEST_TYPE = AFKNNetworkRequest.AFKNNetworkRequestType.GET
        request.API_URL = AFKNConstant.DOC_TALK_LIST
        request.PARAMS = params
        AFKNPlatformUtil().log("DocCategory get getList Called")

        request.makeRequest {
            var code = it.IS_SUCCESS
            var listData: MutableList<DcDocCategoryBModel> = mutableListOf()
            if (code == 1) {
                AFKNPlatformUtil().log("DocCategory get getList on success response")
                var dataList = (it.RESPONCE_DATA as? MutableList<Map<String, Any>>)

                if (dataList != null)
                    for (data in dataList) {
                        var docCategory = DcDocCategoryBModel()
                        docCategory.categoryType = data.get("section_key") as? String
                        docCategory.categoryTitle = data.get("section_name") as? String

                        var itemsList = data.get("list") as? MutableList<Map<String, Any>>
                        when (docCategory.categoryType) {
                            AFKNConstant.DOC_CATEGORY_TYPE_BANNER -> {
                                docCategory.dataList = parseBannerList(itemsList) as? MutableList<Any>
                            }
                            AFKNConstant.DOC_CATEGORY_TYPE_FEATURES_VIDEOS -> {
                                docCategory.dataList = parseVideoList(itemsList) as? MutableList<Any>
                            }
                            AFKNConstant.DOC_CATEGORY_TYPE_SPECIALITY -> {
                                docCategory.dataList = parseSpecialityList(itemsList) as? MutableList<Any>
                            }
                            AFKNConstant.DOC_CATEGORY_TYPE_TOP_SPEAKERS -> {
                                docCategory.dataList = parseSpeakerList(itemsList) as? MutableList<Any>
                            }
                            else -> {
                                docCategory.dataList = parseVideoList(itemsList) as? MutableList<Any>
                            }
                        }
                        listData.add(docCategory)
                    }
            } else {
                AFKNPlatformUtil().log("DocCategory get getList on error response code is $code")
            }
            block(listData)
            return@makeRequest 1
        }
    }

    private fun parseBannerList(dataList: MutableList<Map<String, Any>>?): MutableList<DCBannerBModel> {
        var list: MutableList<DCBannerBModel> = mutableListOf()
        if (dataList != null)
            for (data in dataList) {
                var banner = DCBannerBModel(data)
                list.add(banner)
            }
        return list
    }

    private fun parseVideoList(dataList: MutableList<Map<String, Any>>?): MutableList<DcDocTalkBModel> {
        var list: MutableList<DcDocTalkBModel> = mutableListOf()
        if (dataList != null)
            for (data in dataList) {
                var video = DcDocTalkBModel(data)
                list.add(video)
            }
        return list
    }

    private fun parseSpeakerList(dataList: MutableList<Map<String, Any>>?): MutableList<DCSpeakerBModel> {
        var list: MutableList<DCSpeakerBModel> = mutableListOf()
        if (dataList != null)
            for (data in dataList) {
                var speaker = DCSpeakerBModel(data)
                list.add(speaker)
            }
        return list
    }

    private fun parseSpecialityList(dataList: MutableList<Map<String, Any>>?): MutableList<AFKNSpecialityBModel> {
        var list: MutableList<AFKNSpecialityBModel> = mutableListOf()
        if (dataList != null)
            for (data in dataList) {
                var speciality = AFKNSpecialityBModel(data)
                list.add(speciality)
            }
        return list
    }
}