#include<bits/stdc++.h>
using namespace std;

/*  
 [1,2,3,3] [2,3,4,4] = [1,2,2,3,3,3,4,4]
 making a dummy node

 */
  struct ListNode {
      int val;
      ListNode *next;
      //default constructor
      ListNode(): val(0) , next(nullptr) {} 
      //This is also an Constructor
      ListNode(int x) : val(x), next(nullptr) {}
      //These are the Constructors
      ListNode(int x, ListNode *next) : val(x), next(next) {}

      void insertFirst(int val){

      }
  };



ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
 //make a dummy node
	ListNode dummy(INT_MIN);
//make a tail reference
	ListNode* tail = &dummy;

	while(list1 && list2){
		if(list1->val < list2->val){
			tail->next = list1;
			list1 = list1->next;
		}else{
			tail->next = list2;
			list2 = list2->next;
		}
		tail = tail->next;
	}

	tail->next = list1 ? list1: list2;
	return dummy.next;
}

void insertAtHead(ListNode* &head, int data){
	ListNode* temp = new ListNode(data);
	temp->next = head;
	head = temp;

}

//displaying function 
void display(ListNode* &head){
	while(head){
			cout<< head->val << " ";
			head = head->next;
	}cout<<endl;
}

int main(){
	//we have to make the list1 here
  ListNode* list1 = new ListNode(12);
  ListNode* head1 = list1;
	
	//we have to make the list2 here
  ListNode* list2 = new ListNode(11);
  ListNode* head2 = list2;

	insertAtHead(head1, 14);
	insertAtHead(head1, 34);
	insertAtHead(head1, 4);

  display(head1);

	return 0;
}