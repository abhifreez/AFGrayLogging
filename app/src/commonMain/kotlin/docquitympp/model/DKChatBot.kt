package docquitympp.model

import docquitympp.AFKNNetworkRequest

class DKChatBot {

    fun getAgentList(completionHandler:(agent:DKChatAgent)->Int){

        AFKNNetworkRequest().thirdPartyRequest(url = "https://dialogflow.googleapis.com/v2/projects/surveychatbottest1-0/agent",data = "",compilation = {



            completionHandler(DKChatAgent())

            return@thirdPartyRequest 1;
        })



    }

}

class  DKChatAgent{

    val name:String = ""
    val id:String = ""
}