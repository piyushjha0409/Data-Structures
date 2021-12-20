#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node * next;
		
	node(int val){
		data = val;
		next = NULL;
	}
};
void insertion(node* &head, int val){
    node* n = new node(val); //assigning the memory
	//considering that the link list is empty 
    n->next = head;
	head = n;	
}
//displaying the link list
void display(node* head){
	node* temp = head; //traversal
    if(temp != NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}
bool detectCycle(node* &head){
	
	node* slow = head;
	node* fast = head;
	
	while(fast != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	if(fast==slow){
		cout<<"The linked is list is cycled"<<endl;
	}
}
int main(){
	
	node* head = NULL; 
	
	insertion(head, 5);
	insertion(head, 4);
	insertion(head, 3);
	
	display(head);
	
	return 0;
}
