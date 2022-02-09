#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};
//creating the node
Node* createNode(int data){
    Node * n = new Node;
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

//function for the traversal of the Post order tree (left->right->root)
void printPostOrder(struct Node* root){
    if(root!=NULL){
        //recurs on the left child
        printPostOrder(root->left);
        //recurs on the right child
        printPostOrder(root->right);
        //print the data
        cout<<root->data<<" ";
    }
}
int main()
{
    struct Node * root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
 //print the traversal
 cout<<" The traversal of the tree is (Post Order is )\n";
 printPostOrder(root);

 return 0;
}