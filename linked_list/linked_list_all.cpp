#include<iostream>
using namespace std;

class Node{
    public:
 int data;
 node * next;

 node(int val){
     data = val;
     next = NULL;
 }
};
//insertion of the node
void insertionAtNode(node* &head, int val){
 if(head == NULL){
  head = n;
  return ;
 }
 else{
  node * n = new node(val);
  //traversal for the link list
  node * temp = head; //initialzing from the head
  while(temp->next != NULL){
      temp = temp->next;
  }
  //when the temp is at the last node
  temp->next = n;
 }
 //deleting the node
 void deleteAtNode(node * &head){
  node * temp = head; //initializing from the head
  while(temp->next->next == NULL){  //it has to be at n-1 th position 
      temp = temp->next;
  }
  node * todelete = temp->next;
  temp->next = temp->next->next;
  //delete the node
  delete todelete; 
 }
 //displaying the link list
 void display(node* head){
 while(temp->next != NULL){
     cout<<temp->next<<"->";
 }
 cout<<"NULL";
 }
int main()
{
 node * head = NULL;

 insertionAtNode(Head, 5);
 insertionAtNode(Head, 5);
 return 0;
}
