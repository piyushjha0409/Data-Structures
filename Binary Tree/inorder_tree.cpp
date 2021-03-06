#include<iostream>
using namespace std;

//making of the binary tree
struct Node{
 int data;
 Node * left;
 Node * right;
};

//creating the node
Node* createNode(int data){
Node * n = new Node;
n->data = data;
n->left = NULL;
n->right = NULL;
return n;
}

//inorder - left->root->right (by recurssion)
void printInorder(struct Node* root){
  if(root != NULL){
    //first recur on left child 
   printInorder(root->left);
   //then root data
   cout<< root->data <<" ";
   //recur on right child data
   printInorder(root->right);
  }
  return;
}
int main(){
struct Node* root = createNode(1);
root->left = createNode(2);
root->right = createNode(3);
root->left->left = createNode(4);
root->left->right = createNode(5);

//printing the inorder
cout<<"\n Inorder traversal of binary tree is \n";
printInorder(root);
  
return 0;
}
