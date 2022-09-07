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
//making a link list 
// void insertionAtHead(node* &head, int val){
//     node* n = new node(val);
//     n->next = head;
//     head = n;
// }
void insertion(node* &head, int val){
	node* n = new node(val); //node which will be inserted in the link list
    if(head==NULL){
        head = n;
        return;
    }
     //for traversal	
	node* temp = head; //initializing from the head
	while(temp->next != NULL){
		temp = temp->next;
	}
    temp->next = n;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
     cout<<temp->data<<"->";
     temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
//reversing the link list
node* reverse(node* &head){
 node* prev = NULL;
 node* curr = head;
 node* next;
 while(curr!=NULL){
     next = curr->next;
     curr->next = prev;
     prev = curr;
     curr = next;
 }
 return prev; //return the new head
}
//recursive way of reversing the link list
node* reverse_recursive(node* &head){
	//in case there is empty link list or only one node is present 
   	 if(head == NULL || head->next == NULL){
    	return head;
	}
    node* newhead = reverse_recursive(head->next);
    //just reversing from the end side manually
    head->next->next = head;
    head->next = NULL;  

    return newhead;
}
int main()
{
    node* head = NULL;
    insertion(head, 2);
    insertion(head, 3);
    insertion(head,4);
    display(head);
    node* newhead = reverse(head);
    display(newhead);
    return 0;
}
