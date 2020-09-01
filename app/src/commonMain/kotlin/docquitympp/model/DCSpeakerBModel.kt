package docquitympp.model

class DCSpeakerBModel(val data: Map<String, Any>?) {
    //    @SerializedName("registered_name", alternate = arrayOf("name"))
    var id: Int? = data?.get("id") as? Int
    var name: String? = data?.get("name") as? String
    var photo: String? = data?.get("profile_pic") as? String
    var synopsis: String? = data?.get("synopsis") as? String

    companion object {
        fun parseSpeakerList(dataList: MutableList<Map<String, Any>>?): MutableList<DCSpeakerBModel> {
            var list: MutableList<DCSpeakerBModel> = mutableListOf()
            if (dataList != null)
                for (data in dataList) {
                    var speaker = DCSpeakerBModel(data)
                    list.add(speaker)
                }
            return list
        }
    }
}