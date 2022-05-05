
public class DSA {
  public static void main(String[] args) {

    int[] arr = { -44, 5, -4, 1, -3, 55 };
    int n = 6;
    moveNegative(arr, n);
    printArray(arr, n);
  }

  // printing the array
  static void printArray(int[] arr, int n) {
    for (int i = 0; i <= n - 1; i++) {
      System.out.print(arr[i] + " ");
    }
  }

  // moving -ve numbers
  static void moveNegative(int[] arr, int n) {
    int low = 0;
    int temp;
    for (int i = 0; i < arr.length; i++) {
      if (arr[i] < 0) {
        temp = arr[i];
        arr[i] = arr[low];
        arr[low] = temp;
        low++;
      }
    }
  }
}