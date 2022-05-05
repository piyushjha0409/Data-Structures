import java.util.*;
import java.io.*;
public class practice21 {
    public static void main(String[] args) {
        int[] arr = {1, 0, 0, 1, 0};
        int n = arr.length;

        int ans = bitFlip(arr, n);
        System.out.println(ans);
    }

//Approach 1:

    // static int bitFlip(int[] arr, int n){
    //    int max = 0;
    //    int total = 0;

    //     for(int i=0; i<n; i++){
    //         if(arr[i] == 1){
    //             total++;
    //         }
    //         int count0=0;
    //         int count1=0;
    //         for(int j=i; j<n; j++){
    //          if(arr[j] == 1){
    //              count1++;
    //          }
    //          else{
    //              count0++;
    //          }

    //          max = Math.max(max, count0 - count1);
    //         }
    //     }
    //     int result = total + max;
    //     return result;
    // }

// Approach 2:
   static int bitFlip(int[] arr, int n){
       int total = 0;
       //Initialize the overall maximum difference for any  sub array
       int max_val = 0;
       //Initialize the maximum current difference
       int curr_max = 0;

       for(int i=0; i<n; i++){

        if(arr[i] == 1){
            total++;
        }

        int val = 0;
        if(arr[i] == 1){
            val = -1;
        }
        else{
            val = 1;
        }

        curr_max = Math.max(curr_max, curr_max + val);
        max_val = Math.max(max_val,  curr_max);
        
       }
       max_val = Math.max(0 , max_val);
       int result = total + max_val;
       return result;
   }
}
