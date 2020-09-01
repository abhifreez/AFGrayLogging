package docquitympp

class DCKNUtil{


    companion object {

        val RANDOM_COLOR_1=1
        val RANDOM_COLOR_2=2
        val RANDOM_COLOR_3=3
        val RANDOM_COLOR_4=4
        val RANDOM_COLOR_5=5
        val RANDOM_COLOR_6=6
    }






    fun getRandomColorType(firstAlphbet:String?="",secondAlphabet:String?=""):Int{

        var firstPos=0
        var secondPos=0

        val alphabets = "abcdefghijklmnopqrstuvwxyz"

        val firstInput = firstAlphbet?.toLowerCase()
        val secondInput = secondAlphabet?.toLowerCase()

        if(alphabets.contains(firstInput.toString())){
            for (i in 0 until firstInput!!.length) {
                firstPos=alphabets!!.indexOf(firstInput[i]) + 1
            }

        }

        if(alphabets.contains(secondInput.toString())){
            for (i in 0 until secondInput!!.length) {
                secondPos=alphabets!!.indexOf(secondInput[i]) + 1
            }

        }




        var sumOfAlphabetPosiions=firstPos+secondPos



        if(sumOfAlphabetPosiions<5){
            return RANDOM_COLOR_1
        }else if(sumOfAlphabetPosiions>5 && sumOfAlphabetPosiions<=10){
            return RANDOM_COLOR_2
        }else if(sumOfAlphabetPosiions>10 && sumOfAlphabetPosiions<=15){
            return RANDOM_COLOR_3
        }else if(sumOfAlphabetPosiions>15 && sumOfAlphabetPosiions<=20){
            return RANDOM_COLOR_4
        }else if(sumOfAlphabetPosiions>20 && sumOfAlphabetPosiions<=25){
            return RANDOM_COLOR_5
        }else if(sumOfAlphabetPosiions>25 && sumOfAlphabetPosiions<=30){
            return RANDOM_COLOR_6
        }else if(sumOfAlphabetPosiions>30 && sumOfAlphabetPosiions<=35){
            return RANDOM_COLOR_1
        }else if(sumOfAlphabetPosiions>35 && sumOfAlphabetPosiions<=40){
            return RANDOM_COLOR_2
        }else if(sumOfAlphabetPosiions>40 && sumOfAlphabetPosiions<=45){
            return RANDOM_COLOR_3
        }else if(sumOfAlphabetPosiions>45 && sumOfAlphabetPosiions<=50){
            return RANDOM_COLOR_4
        }else {
            return RANDOM_COLOR_5
        }




    }

}