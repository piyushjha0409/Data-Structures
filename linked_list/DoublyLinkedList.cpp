#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;
node* prev;

node(int val){
    data = val;
    next = NULL;
    prev = NULL;
}
};
void insertAtHead(node* &head, int val){
 //head = NULL
 node* n = new node(val);
 n->next = head;
 if(head != NULL){
 head->prev = n;
 }	
}
void insertionAtTail(node* &head, int val){
	//if your link list is empty 
	if(head == NULL){
	   insertAtHead(head, val);
	   return;
	}
    node* n = new node(val);
    node*temp = head;
    
    while(temp->next != NULL){
    	temp = temp->next;
	}
	temp->next = n;
	n->prev = temp;
}
void deletion(node* &head, int val){
	node* temp = head;
	while(temp->next){
	}
}
void display(node* head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"";
		temp = temp->next;
	}
	cout<<endl;
}
int main()
{
	node* head = NULL;
	insertAtHead(head, 7);
	insertAtHead(head, 3);
	insertAtHead(head, 4);
	display(head);
	
 return 0;
}
