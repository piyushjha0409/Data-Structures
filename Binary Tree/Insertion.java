import java.util.LinkedList;
import java.util.Queue;

public class Insertion {
class binaryTree{

    static class Node{
          int key;
          Node left, right;

          //constructor
          Node(int key){
              this.key = key;
              left = right = null;    
          }
    }
    static Node root;
    static Node temp = root;

    static void inorder(Node temp){
        if(temp == null){
            return;
        }

        inorder(temp.left);
        System.out.println(temp.key + " ");
        inorder(temp.right);
    }

    //function for the insertion
    static void insertion(Node temp, int key){
        //if the tree is empty
          if(temp == null){
              root = new Node(key);
              return;
          }
          
          //if the tree is not empty
          Queue<Node> q = new LinkedList<Node>();
          q.add(temp);

          //Do level order travesals until we find the empty place 
          while(!q.isEmpty())
          {
              temp = q.peek();
              q.remove();

              if(temp.left == null){
                  temp.left = new Node(key);
                  break;
              }
              else{
                  q.add(temp.left);
              }
              if(temp.right == null){
                  temp.right = new Node(key);
                  break;
              }
              else{
                  q.add(temp.right);
              }
          }
    }
}
    public static void main(String[] args) {
        root = new Node(10);
        root.left = new Node(11);
        root.left.left = new Node(9);
    }
}
