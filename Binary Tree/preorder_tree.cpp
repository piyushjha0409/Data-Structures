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
void preorder(struct Node* root){
  if(root!=NULL){
    cout<<root->data;
    cout<<root->left;
    cout<<root->right;
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
    preorder(root);
  return 0;
}
