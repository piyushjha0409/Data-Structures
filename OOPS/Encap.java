class Student{
  String name = "Piyush";
  private int age = 18;

  public int getAge(){
    return age;
  }
class Student2 extends Student{
    String name = "Shubh";
}
}

public class Encap extends Student2 {
    public static void main(String[] args) {
        Student obj = new Student();

        System.out.println(obj.name);
        // System.out.println(obj.age);
    }
}
