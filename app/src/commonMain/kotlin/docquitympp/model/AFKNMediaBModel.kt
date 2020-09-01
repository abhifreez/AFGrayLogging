package docquitympp.model

class AFKNMediaBModel(val data: Map<String, Any>?) {
    //    @SerializedName(value = "id", alternate = arrayOf("media_id"))
    var id: String? = data?.get("id") as? String
    //    @SerializedName(value = "file_type", alternate = arrayOf("media_type"))
    var fileType: String? = data?.get("file_type") as? String
    //    @SerializedName(value = "file_name", alternate = arrayOf("media_name"))
    var fileName: String? = data?.get("file_name") as? String
    //    @SerializedName(value = "file_url", alternate = arrayOf("media_url"))
    var fileUrl: String? = data?.get("file_url") as? String
    //    @SerializedName(value = "file_time_duration", alternate = arrayOf("media_time_duration"))
    var fileTimeDuration: Long? = data?.get("file_time_duration") as? Long
    //    @SerializedName(value = "preview_url", alternate = arrayOf("media_thumbnail"))
    var previewUrl: String? = data?.get("preview_url") as? String
    var caption: String? = data?.get("caption") as? String
    var mediaOriginalUrl: String? = data?.get("media_original_url") as? String
    var resumeMediaSecond: Int? = data?.get("resume_on_in_sec") as? Int

    var downloadUrlOriginalPath: String? = null
    var isPreviewUploaded: Boolean = false
    var isMediaFileUploaded: Boolean = false
    var isCompressNeeded: Boolean = false
    var relativeUrl: String? = ""


    companion object {

        fun parseMediaList(dataList: MutableList<Map<String, Any>>?): MutableList<AFKNMediaBModel> {
            var list: MutableList<AFKNMediaBModel> = mutableListOf()
            if (dataList != null)
                for (data in dataList) {
                    var media = AFKNMediaBModel(data)
                    list.add(media)
                }
            return list
        }

    }
}


