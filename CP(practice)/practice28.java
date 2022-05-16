public class practice28 {
    public static void main(String[] args) {
       int[] arr = {1,2,2,2,2,3,4,7,8,8};
    int n = arr.length;
    int target = 2;

    System.out.println(countOccurence(arr, n, target));
    }

    //function for the binary search 
    static int binarySearch(int[] arr, int n,  int target){
         int start = 0;
         int end = arr.length-1;

         while(start > end){
             int mid = start + (end - start)/2;
             if(arr[mid] == target){
                 return mid;
             }
             else if(arr[mid] < target){
                 end = mid - 1;
             }
             else{
                 mid = start + 1;
             }
        }
            return -1;
    }
     static int countOccurence(int[] arr, int n, int target){
         int ind = binarySearch(arr, n, target);

         //if element is not present 
         if(ind == -1){
             return 0;
         }
         int count = 1;
         int start = ind + 1;
         while(start >= 0 && arr[start] == target){
             count ++;
             start --;
         }

         int end = ind + 1;
         while(end < n && arr[end] == target){
             count++;
             end++;
         }
         return count;
     }
}

