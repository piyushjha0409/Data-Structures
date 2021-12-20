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
void insertionAtHead(node* &head, int val){
	node* n = new node(val);
		n->next = head;
		head = n;
}
void insertion(node* &head, int val){
node* n = new node(val);
 if(head==NULL){
		head = n;
		return;
}
node * temp = head;
while(temp->next!=NULL){
	temp = temp->next;
}
temp->next = n;
}

void deleteElement(node* &head, int val){
	node* temp = head;
	while(temp->next->next!=NULL){
		temp = temp->next;
	}
	// in this case temp is at the n-1th node 
	 node* todelete = temp->next;
	 temp->next= temp->next->next;
	//then delete the node
	 delete todelete;
}
//deleting from the head of the link list 
void deleteAtHead(node * &head){
	node * todelete = head;
	head = head->next;
	delete todelete;
}
//displaying the link list
void display(node* head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}
int main()
{	
node* head = NULL;
insertionAtHead(head, 1);
insertionAtHead(head, 2);
insertionAtHead(head, 3);
display(head);
deleteElement(head, 3);
display(head);


	return 0;
}
