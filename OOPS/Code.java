abstract class Main{
      
    public String fname = "Piyush";
    String lname = "Jha";
    public int age = 18;

    public abstract void study();
}

//inherited class
class Student extends Main{
    public int graduationYear = 2020;

    public void study(){
        System.out.println("Studying all day along: ");
    }
}
public class Code{
    public static void main(String[] args) {
        Student myObj = new Student();

        System.out.println("First name: " + myObj.fname);
        System.out.println("last name: " + myObj.lname);
        System.out.println("age: " + myObj.age);
        System.out.println("Graduation year: " + myObj.graduationYear);
        myObj.study();
    }
}