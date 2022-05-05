import java.util.*;

public class DutchFlag {
    static void solve(int[] arr, int size){
          int low = 0;
          int high = size-1;
          int mid=0, temp = 0;

          while(mid<=high){
              switch (arr[mid]) {
                  case 0:{
                      //swap krna hai low ke saath
                      temp = arr[mid];
                      arr[mid] = arr[low];
                      arr[low] = temp;
                      low++;
                      mid++;
                      break;
                  }
                  case 1:{
                       mid++;
                      break;
                  }
                  case 2:{
                    //ab isko high se swap krna hai 
                     temp = arr[mid];
                     arr[mid] = arr[high];
                     arr[high] = temp;
                     high--;
                     break;
                  }
              }
          }
    }

    //printing the array 
    static void printArray(int[] arr, int size){
        for(int i=0; i<size; i++){
            System.out.print(arr[i]+ " ");
        }
        System.out.println("");
    }

    public static void main(String[] args) {
     
        int[] arr = {0,1,1,2,0,1};
        int size = arr.length - 1;
        printArray(arr, size);
        solve(arr, size);
        printArray(arr, size);
    }
}
