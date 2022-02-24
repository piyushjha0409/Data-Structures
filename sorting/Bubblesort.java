public class Bubblesort {
    public static void main(String[] args) {
        
    }

    //function for the bubble sort 
    static void Bubble(int[] arr){
        //run the steps n-1 times
        for(int i=0; i<arr.length; i++){
            //for each step max item will come at the last respective index
            for(int j=0; j<arr.length - i; j++){
                //sawp if the item is smaller than the previous item
                if(arr[j] < arr[j-1]){
                    //swap
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                }
            }
        }
    }
}
