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
  Node* n = new Node;
  n->data = data;
  n->left = NULL;
  n->right = NULL;
  return n;
}

//preorder - data->left->right
void printPreorder(struct Node* root){
  if(root!=NULL){
   //print the data of the root
   cout<< root->data<<" ";
   //recur the left child 
   printPreorder(root->left);
   //recur the right child
   printPreorder(root->right);
  }
  return;
}
int main(){
  struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);
  return 0;
}
