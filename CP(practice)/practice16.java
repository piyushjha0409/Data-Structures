public class practice16 {
    public static void main(String[] args) {
        int[] arr = {1,2,5,6,7,7,8,9};
        int n = arr.length;
        int target = 7;
        
        System.out.println(First_Occur(arr, n, target));
        System.out.println(Last_Occur(arr, n, target));
    }

    //function for the first occurence
    public static int  First_Occur(int[] arr, int n , int target){
        int first = -1;
        int start = 0;
        int end = n-1;

        while(start <= end){
            int mid = start + (end- start)/2;

            if(arr[mid] == target){
                first = mid;
                end = mid - 1;
            }
            else if(arr[mid]< target){
                start = mid + 1;
            }
            else{
                end  = mid -1;
            }
        }
        return first;
    }

    public static int Last_Occur(int[] arr, int n, int target){
        int last = -1;
        int start = 0;
        int end = n - 1;

        while(start <= end){
            int mid = start + (end - start)/2;
           
            if(arr[mid] == target){
                last = mid;
                end  = mid - 1;
            }
            else if(arr[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return last;
    }
}
