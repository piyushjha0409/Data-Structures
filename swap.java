public class swap {
    public static void main(String[] args) {
     swap(4,5);
    }
    static void swap(int x, int y){
        int temp = x;
        x = y;
        y = temp;

        System.out.println(x);
        System.out.println(y);
    }
}
