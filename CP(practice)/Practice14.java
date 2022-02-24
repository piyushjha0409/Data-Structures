import java.util.Scanner;

//Bubble sort Algorithm
public class Practice14 {

    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        int size = in.nextInt();
        int[] arr = new int [size];

        //for taking the user input
        for(int i=0; i<size; i++){
             arr[i] = in.nextInt();
        }
        
        //function declaration 
        sortNegative(arr, size);

        //for printing the array 
        for(int i=0; i<size; i++){
            System.out.print(arr[i]+ " ");
        }
}
//function 
    static void sortNegative(int[] arr,  int size){
        int j = 0;
        for(int i=0; i<size; i++){
            if(arr[i] < 0){
                    //swap
                      int temp = arr[i];
                      arr[i] = arr[j];
                      arr[j] = temp;
                      j++;
            }
        }
    }
}