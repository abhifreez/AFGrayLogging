package docquitympp


class DCKNAnalyticEvent(eventName:String,productId:String,productType:String,data:HashMap<String,Any>) {

     lateinit var eventId:String
     var eventName:String = eventName
     var productId:String = productId
     var productType:String = productType


    init {

    }


    fun pushEvent(){

        var base:AFKNBaseRequest = AFKNBaseRequest();
        base.BASE_URL = "";
       // base.HEADER_DATA =


        var request:AFKNNetworkRequest = AFKNNetworkRequest();
        request.REQUEST_TYPE =  AFKNNetworkRequest.AFKNNetworkRequestType.POST;
        request.API_URL = ""
        request.BASE_REQUEST


    }








}