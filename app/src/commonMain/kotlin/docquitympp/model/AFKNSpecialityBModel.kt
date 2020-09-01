package docquitympp.model

class AFKNSpecialityBModel(val data: Map<String, Any>?) {
    var specialityId: Int? = data?.get("speciality_id") as? Int
    var specialityName: String? = data?.get("speciality_name") as? String
    var logo: String? = data?.get("logo") as? String
    var videoCount: Int? = data?.get("videoCount") as? Int
}