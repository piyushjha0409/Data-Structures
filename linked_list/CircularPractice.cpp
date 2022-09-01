#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

//insertion at head
void insertionAtHead(Node* &head, int val){
Node* n = new Node(val);
if (head == NULL){
  n->next = n;
  head = n;
  return;
}
Node* temp = head;

while(temp->next != head){
    temp = temp->next;
}
 temp->next = n;
 n->next = head;
 head = n;
}

//function to print the link list
void display(Node* head){
 Node* temp = head;
 do{
   cout<<temp->data<<" ";
   temp = temp->next;
 }while(temp != head);

}

//function for deleting the node
void deletion(Node* &head, int key){
 
 //if position is one
 if(key == 1){
    return;
 } 
 Node* temp = head;
 int count = 1;

if(count != key - 1){
   temp = temp->next;
   count++;
}
 Node* toDelete = temp->next;
 temp->next = temp->next->next;

 
    
}
int main()
{

 Node* head = NULL;

 insertionAtHead(head, 3);
 insertionAtHead(head, 5);
 insertionAtHead(head, 7);

//printing the circular link list
display(head);
    
    return 0;
}   