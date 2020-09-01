package docquitympp.model


class DCBannerBModel(val data: Map<String, Any>?) {
    var bannerId = data?.get("banner_id") as? Int
    var fileType = data?.get("file_type") as? String
    var fileUrl = data?.get("file_url") as? String
    var targetType = data?.get("target_type") as? Int
    var targetId = data?.get("target_id") as? Int
    var targetUrl = data?.get("target_url") as? String
}