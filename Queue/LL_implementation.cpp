#include<iostream>
using namespace std;

//linked list
class node{
public:
  int data;
  node* next;

  node(int val){
    data = val;
    next = NULL;
  }
};
//Queue
class queue{
] node* front;
  node* back;
  Public:
  queue(){
   //initialize both the pointers from the NULL
   front = NULL;
   back = NULL;
  }

  //operation for insertion
  void push(int x){
    //create a new node for storing the value x
    node* n = new node(x);
    if(front == NULL) //queue is empty
    {
      front = n;
      back = n;
      return;
    }
    back->next = n;
    back = n;
  }
};

int main(){

  return 0;
}
