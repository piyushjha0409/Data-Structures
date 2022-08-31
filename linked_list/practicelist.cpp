//implementation of the linked list
#include<bits/stdc++.h>
using namespace std;

class Node{
   public:
    int data; //this is the variable for storing the data of the particular node
    Node* next; //This is the pointer which points towards the tail of the linked list
};

//function for printing the list 
void printList(Node* n){
 while(n != NULL){
    cout<<n->data<<"->";
    n = n->next;
 }
 cout<<"NULL"<<endl;
}

//function for insertion in the linked list
int insertionAtPos(Node* &head, int val, int pos){
 Node* n = new Node(val); //creating a node for the insertion 
//what if the linked list is empty
 if(first == NULL){
    first = n;
    return;
 }
 //if it is non-empty
 Node* temp = first;  //pointer for the traversal initializing from the first node
 while(temp->next != pos)[
    temp = temp->next; //badhate jao
 ]
 //now it is in null
 temp->next = n;
}

//deletion of the Node in the linked list
// 9->5->7->NULL;
void deleteAtPos(Node* &head, int pos){
Node* temp = first;

if(pos == 0){
    free(temp);
    return;
}
while(temp->next->next != pos){
    temp = temp->next; //badhate jao
}
//Now at this position temp is at desired pos
Node* todelete = temp->next;
temp->next = temp->next->next;
delete todelete;
}

int main()
{
    Node* first = NULL;
    Node* second = NULL;
    Node* third = NULL;

    //allocation of the node in the heap
    first = new Node();
    second = new Node();
    third = new Node();

    //putting the data in the nodes and connecting to the next node
    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL; //so thr third is the last node so the next of it will points towards the null

    printList(first);//calling the print function 

    insertionAtPos(first, 7, 2);

    printList(first);
    return 0;
}