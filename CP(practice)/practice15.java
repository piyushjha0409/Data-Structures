/**
 * practice15
 */
//kadanes algorithm 
public class practice15 {
public static void main(String[] args){
     int[] arr = {-4, 2, 7,-9};
     int ans = SumArray(arr);
     System.out.println(ans);

}
    
//function for the sumArray
public static int SumArray(int[] arr)
{
  var sum = 0;
  var max  = arr[0];

  for (var item : arr) {
      sum += item;

      //sum = Math  

      max = Math.max(sum, max);
      sum = Math.max(sum, 0);
  }
  return max;
}
}