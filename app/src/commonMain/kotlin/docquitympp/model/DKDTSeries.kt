package docquitympp.model

class DKDTSeries {

     var id:Int? = 0
     var title:String? = ""
     var description:String? = ""
     var banner:String? = ""

    constructor(jsonDict:Map<String,Any>?){

        this.id = jsonDict?.get("doctalks_series_id") as? Int
        this.title = jsonDict?.get("doctalk_series_title") as? String
        this.description = jsonDict?.get("doctalks_description") as? String
        this.banner = jsonDict?.get("doctalks_banner") as? String

    }

}

/*
 "doctalks_series_id": 26,
                    "doctalk_series_title": "Series 26",
                    "doctalks_description": "series one",
                    "doctalks_banner": "series one"
 */