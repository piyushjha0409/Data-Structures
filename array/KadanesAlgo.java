import java.util.*;
import java.io.*;
public class KadanesAlgo {
    public static void main(String[] args) {
       int a[] = {-2, 1, 5, 7 , -2, 5};
       System.out.println("Maximum contioogous sum is " + maxSubArray(a)); 
    }

    static int maxSubArray(int[] a){
        int size = a.length;
        int max = Integer.MIN_VALUE;
        int sum = 0;
        for( int i=0; i<size; i++){
            sum = sum + a[i];

            if(max<sum){
              max = sum;
            }
            if(sum<0){
                sum = 0;
            }
        }
        return max;
    }
}
