package docquitympp.model

class AFKNShareBModel(val data: Map<String, Any>?) {
    var title: String? = data?.get("email_title") as? String
    var content: String? = data?.get("email_content") as? String
    var otherContent: String? = data?.get("other_content") as? String
}