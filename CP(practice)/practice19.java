import java.util.Arrays;
import java.util.Scanner;

public class practice19 {

    //function for checking the length
static boolean checkLength(String str1, String str2, String res){
    if(str1.length() + str2.length() != res.length()){
        return false;
    }
    else{
        return true;
    }
}

//after checking the lenght we have to convert the string into the char array and then sort it 
static String sortString(String str){

    char[] charArray = str.toCharArray();
    Arrays.sort(charArray);

    //converting the char array back into the string 
    str = String.valueOf(charArray);

    return str;
}

//function for Shuffle check
static boolean checkShuffle(String str1, String str2, String res){
    str1 = sortString(str1);    
    str2 = sortString(str2);    
    res = sortString(res); 
    
    //variables to check for the loop
    int i=0, j=0, k=0;
    
    while(k != res.length()){

        if(i< str1.length() && str1.charAt(i) == res.charAt(k)){
           i++;
        }
         else if(j< str2.length() && str2.charAt(j) == res.charAt(k)){
           j++;
        }
        else{
            return false;
        }
        k++;
    }
    //after accessing all the characters of the result 
    //if either first or second has some characters left
    if(i < str1.length() || j < str2.length()){
        return false;
    }

    return true;
    }

public static void main(String[] args) {
    String str1 = "fdf";
    String str2 = "fjdf";
    String[] result = {"fdffdfd", "dsdsf"}; 
     
     for(String res: result){
         if(checkLength(str1, str2, res) == true && checkShuffle(str1, str2, res) == true){
             System.out.println(res + "is a valid Shuffle of "+ str1 + "and " + str2);
         }else{
                System.out.println(res + " is not  a valid shuffle of "+ str1 + "and " + str2);
         }
     }
    }
}
