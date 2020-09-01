package docquitympp.model

import docquitympp.AFKNNetworkRequest
import docquitympp.AFKNPlatformUtil

class DKLocation {


    companion object {
        fun getAddressForCordinates(cordinates: DKLCordinates, complition: (address: DKLAddress) -> Int) {


            var url =
                "https://maps.googleapis.com/maps/api/geocode/json?latlng=" + cordinates.latitude + "," + cordinates.logitude + "&key=AIzaSyC4PtVTJCYWSRuCkXChpku1unvN5MH-SXc"
            var request = AFKNNetworkRequest();
            request.thirdPartyRequest(url = url, data = "", compilation = {

                println("Recived Responce Form Ntwork To Model")

                AFKNPlatformUtil().log("Recived Responce Form Ntwork To Model")

                var address = DKLAddress(it.RESPONCE_DATA as? Map<Any, Any>);

                AFKNPlatformUtil().log("Conversion sucess")
                complition(address)

                return@thirdPartyRequest 0;
            })


            /* DKChatBot().getAgentList {

                 complition(DKLAddress(it));
                 return@getAgentList 1;
             }*/

            /*

                  var url = "https://maps.googleapis.com/maps/api/geocode/json?latlng="+cordinates.latitude+","+cordinates.logitude+"&key=AIzaSyC4PtVTJCYWSRuCkXChpku1unvN5MH-SXc"
                  var request = AFKNNetworkRequest();



                  request.thirdPartyRequest(url = url,data = "",compilation = {

                      var address = DKLAddress(it.RESPONCE_DATA as HashMap<Any, Any>);
                      complition(address)

                      return@thirdPartyRequest 0;
                  })
             */

        }
    }

}

class DKLCordinates(latitude: Double, longitude: Double) {


    var latitude: Double? = latitude
    var logitude: Double? = longitude
}

class DKLAddress {

    var country: String? = ""
    var city: String? = ""
    var state: String? = ""
    var postalCode: String? = ""
    var fullAddress: String? = ""

    constructor() {

    }

    constructor(data: Map<Any, Any>?) {

        AFKNPlatformUtil().log("Started Convverting Data to model 1")
        var results: MutableList<Any>? = data?.get("results") as? MutableList<Any>
        AFKNPlatformUtil().log("Started Convverting Data to model 2")
        var result: Map<String, Any>? = results?.get(0) as? Map<String, Any>
        AFKNPlatformUtil().log("Started Convverting Data to model 3")
        var addressComponents: MutableList<Any>? = result?.get("address_components") as? MutableList<Any>
        AFKNPlatformUtil().log("Started Convverting Data to model 4")
        fullAddress = result?.get("formatted_address") as? String
        AFKNPlatformUtil().log("Started Convverting Data to model 5")

        if (addressComponents != null)
            for (component in addressComponents) {
                AFKNPlatformUtil().log("Started Convverting Data to model 6")
                var comp: Map<String, Any>? = component as? Map<String, Any>;
                AFKNPlatformUtil().log("Started Convverting Data to model 7")
                var types: MutableList<String>? = comp?.get("types") as? MutableList<String>
                AFKNPlatformUtil().log("Started Convverting Data to model 8")
                when (types?.contains("administrative_area_level_2")) {
                    true -> {
                        city = comp?.get("long_name") as? String
                    }
                    else -> {
                        when (types?.contains("administrative_area_level_1")) {
                            true -> {
                                state = comp?.get("long_name") as? String
                            }

                            else -> {
                                when (types?.contains("country")) {
                                    true -> {
                                        country = comp?.get("long_name") as? String
                                    }
                                }
                            }
                        }
                    }
                }
            }
    }
}