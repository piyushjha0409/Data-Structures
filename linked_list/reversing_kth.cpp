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
//inserting the list at head
void insertionAtHead(node* &head, int val){
	node* n = new node(val);
	  n->next = head;
      head = n;
}
//displaying the link list
void show(node* head){
	node* temp = head; //intializing from the head
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}
//reversing the link list from the kth node
int reversek(node* &head, int k){
	node* prev = NULL;//initialzing from the null point 
	node* curr = head; //initializing from the head 
	node* next;
	
	
	int count = 0;  //counting from the zero
	while(curr != NULL && count < k){
		next = curr->next;  
		curr->next = prev;
		prev = curr;
		curr = next;
		count++;
	}
	//if there is an empty linked list then recurssion 
	if(next != NULL){
	head->next = reversek(next, k);
	}
	return prev;
}
int main(){
	node* head = NULL; //intializng the head from the NUll
	insertionAtHead(head,1);
	insertionAtHead(head,2);
	insertionAtHead(head,3);
	
	show(head); //displaying the link list after rerversing the link list
	int k = 3;
	node* newhead  = reversek(head,k);
	show(newhead);
	return 0;
}
