#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;

node(int val){
     data = val;
     next = NULL;
 }
};
//inserting at the head of the link list 
void insertAtHead(node* &head, int val){
    node *n = new node(val);
    n->next = head;
    head = n;
}
//inserting at the end of the link list 
 void insertAtTail(node* &head, int val){
     //condition if there is not a single node in the link list
     node* n = new node(val);
     if(head == NULL){
         head = n;
         return;
     }
     node* temp = head;
     while(temp->next != NULL){
         temp = temp->next;
     }
     temp->next = n;
 }
 //inserting the node from the part position of the link list
 void insertionPartPos(node* &head, int pos, int val){
 	node* n = new node(val);
 	node* temp = head;
 	
 	cin>>pos;
 	while(temp->next != pos){
 		temp = temp->next;
	 }
	 temp->next = n;
 }
 //printing the link list  
 void display(node* head){
     node* temp = head;
     while(temp != NULL){
      cout<<temp->data<<"->";
      temp = temp->next;
     }
     cout<<"NULL"<<endl;
 }
 bool searchElement(node* head, int key){
     node* temp = head;
     while(temp!= NULL){
         if(temp->data == key){
             return true;
         }
         temp = temp->next;
     }
     return false;
 }
int main()
{
    node * head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    insertAtHead(head, 5);
    display(head);
    cout<<searchElement(head, 6); //searching for the element(checking if the element is present or not)
    return 0;
}
