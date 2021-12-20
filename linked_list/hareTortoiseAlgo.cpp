//tortoise and hare algorithm
#include<iostream>
using namespace std;

//build a circular linked list
class node{
	public:
	 int data;
	 node* next;
	 
	 node(int val){
	 	data = val;
	 	next = NULL;
	 }
};

int insertionCircular(node* &head, int val){
 node* n = new node(val); //new node create for the insertion of the link list
 n->next = head;
 
 if(head != NULL){
 	node* temp = head;
 	while(temp->next != head){
 		temp = temp->next;
	 }
	 temp->next = n;
	 n->next = head;
	 head = n;
 }
}
//make a function for this algorithm
int findLoop(node* &head){
	node* p1; //node pointer for the tortoise
	node* p2; //node pointer for the hare
//if link list is empty 	
	if(head == NULL){
		return NULL;
	}
	 p1 = head;
	 p2 = head;

 while(p2->next != NULL && p2->next->next != NULL){
 	p1 = p1->next;  //tortoise
 	p2 = p2->next->next; //hare
 	//if they meet at some point then the linklist is circular
 	if(p1==p2){
 		p1 = head;
 		
 		while(p1!=p2){
 			p1=p1->next;
 			p2=p2->next;
		 }
		 return p2;
	 }
 }	
 return NULL;
}
int main(){
	
	return 0;
}
