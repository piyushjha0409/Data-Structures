#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
	
	node(int val){
		val = data;
		next = NULL;
	}
};
//insertion in the circular link list
void insertionCircular(node* &head, int val){
	node* n = new node(val);
	n->next = head;

	if(head != NULL){
		node* temp = head;
		while(temp->next != head){
			temp = temp->next;
		}
		temp->next  = n;
		n->next = head;
		head = n;
	}
   else{
		 // for the first node
			n = n->next;
			head = n;
	}		
}
void display(node* head){
	node* temp = head;
	do{
		cout<<temp->data<<"->";
		temp = temp->next;
	}while(temp!=head);
	cout<<endl;
}
//void insertionAtNode(node* &head, int val, int pos){
//	node* n = new node(val);
//	node* temp = head;
//	if(head == NULL){
//		head = n;
//		n->next = head;
//	}
//	else{
//	while(temp->next != pos){
//		temp = temp->next;
//	}
//	temp->next = n;
//	n->next = temp->next;	
// }	
//}
////Deletion at the head;
//void deleteAtHead(node* &head){
//	node* todelete = head->next;
//	
//}
////Deletion of node to the circular linklist
//void deletion(node* head, int pos){
//	node* temp = head;
//    int count = 1;
//	
//	while(count!= pos-1){
//		temp = temp->next;
//		count++;
//	}
//	node* todelete = temp->next;
//	temp->next = temp->next->next;	
//	}
//}
int main(){
	node* head = NULL;
	insertionCircular(head, 1);
	insertionCircular(head, 2);
	insertionCircular(head, 3);
	
	display(head);
	return 0;
}
