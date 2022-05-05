import java.util.ArrayList;
import java.util.Scanner;

public class practice18 {
    public static void main(String[] args) {
     Scanner in = new Scanner(System.in);
     
     String str1 = in.next();
     String str2 = in.next();
     String result =  in.next();

     int ans = checkShuffle(str1, str2, result);

     System.out.println(ans);
    }

    static int checkShuffle(String str1, String str2, String result){
       
        int[] ascii = new int[128]; 
        int i=0, k=0, j=0;

        while(i<str1.length() || j<str2.length() || k<result.length()){
            if(i<str1.length()){
                ascii[(str1.charAt(i))]++; i++;
            }
            if(j<str2.length()){
                ascii[(str2.charAt(i))]++; j++;
            }
            if(k<result.length()){
                ascii[(result.charAt(i))]++; k++;
            }
        }

        for(int m=0; m<128; m++){
          if(ascii[i] != 0 && ascii[i] != 2){
            //   System.out.println("No");
              return 0;
          }
        }
        return 1;
    }
}
