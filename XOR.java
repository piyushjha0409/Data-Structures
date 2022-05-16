public class XOR {
    public static void main(String[] args) {
        int m = 2;
        int n = 3;

        swap2(n,m);
        System.out.println(n + " and " + m);
    }

    static void swap(int n, int m){
          int temp = n;
          n = m;
          m = temp;
    }

    static void swap2(int n, int m){
        m = n^m;
        n = m^n;
        m = n^m;
    }
}
