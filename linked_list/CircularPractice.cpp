#include<bits/stdc++.h>
using namespace std;

class Node{
    int value;
    Node* next;
}

void insertion(Node* &head, int data){
    Node* n = new Node(data);
    n->next = head;

    //if the linked list is not null
    if(head != NULL){
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
            temp->next = n;
        }
        else{
            //for the first node
            n->next = n;
            head = n;
        }
    }
}
void display(Node* head){
 Node* temp = head;
 do{
   cout<<temp->value<<"->";
   temp = temp->next;
 }while(temp != head);

 cout<<endl;
}

int main()
{
    Node one = new Node(3);
    Node second = new Node(9);
    Node third = new Node(6);

 //Connecting the nodes
 one.next = second;
 second.next = third;
 third.next = one;

//printing the circular link list

display(one);
    
    return 0;
}   