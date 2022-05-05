public class practice17 {
    //function for comparing the rotation of the string
    static boolean arrRotations(String str1 , String str2){
        return(str1.length() == str2.length()) && ((str1 + str1).indexOf(str2) != -1); //str1 + str1 = temp[]
    }
    public static void main(String[] args) {     
        String str1 = "AADC";
        String str2 = "AACD";
        if(arrRotations(str1, str2)){
            System.out.println("Strings are the rotation of each other");
        }else{
            System.out.println("Strings are not the rotation of each other");
        }
    }
}
