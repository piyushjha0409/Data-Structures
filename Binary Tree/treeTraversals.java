class Node{
    int key;
    Node left, right;

    public Node(int item){
        key = item;
        left = right = null;
    }
}
//Inorder - left->root->right
//preorder - root->left-right
//postrder - left->right->root
public class treeTraversals {

    //Root of the Binary tree
    Node root;

    treeTraversals(){
        root = null;
    }
    
    //recursive function for the inorder traversal
    void inOrder(Node node){

        if(node == null){
            return;
        }
        inOrder(node.left);
        System.out.println(node.key + " ");
        inOrder(node.right);
    }
    //recursive function for the Preorder traversal
    void PreOrder(Node node){

        if(node == null){
            return;
        }
        System.out.println(node.key + " ");
        PreOrder(node.left);
        PreOrder(node.right);
    }
    //recursive function for the Postorder traversal
    void PostOrder(Node node){

        if(node == null){
            return;
        }
        PostOrder(node.left);
        PostOrder(node.right);
        System.out.println(node.key + " ");
    }
    //Wrappers over above recursive fucntion
    void inOrder(){inOrder(root);}
    void PreOrder(){PreOrder(root);}
    void PostOrder(){PostOrder(root);}

    public static void main(String[] args) {
        
        treeTraversals tree = new treeTraversals();
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);

        System.out.println("Preorder Traversal: ");
        tree.PreOrder();
    }
}