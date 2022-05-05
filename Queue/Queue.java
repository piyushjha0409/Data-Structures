import java.util.*;
import java.lang.*;

class Queue {

    static class Test{
    
    static Stack<Integer> s1 = new Stack<Integer>();
    static Stack<Integer> s2 = new Stack<Integer>();
    
    static void enQueue(int x){
        //Move all the elements from s1 to s2
        while(!s1.isEmpty()){
                s2.push(s1.pop());
            }

            //push the item to the s1
            s1.push(x);
            
            //push everything back to the s1
            while(!s2.isEmpty()){
                s1.push(s2.pop());
            }  
        }
        //Deque item from the queue
        static int deque(){

            if(s1.isEmpty()){
                System.out.println("Queue is empty!");
                System.exit(0);
            }
            //return the top of the s1
            int x = s1.peek();
            s1.pop();
            return x;
        }
    };
    //Driver code 
    public static void main(String[] args) {
        Queue obj = new Queue();
        obj.EnQueue(1);

    }
}