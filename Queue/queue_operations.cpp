#include<iostream>
using namespace std;
#define n 20
//queue and its operations
class queue{
int* arr;
int front;
int back;

public:
queue(){
  arr = new int[n]; //assigning memory to the array
  front = -1;
  back = -1;
}
void push(int x){
  if(back == n - 1){
    cout<<"Queue is Overflowed:"<<endl;
    return;
  }
  back++;
  arr[back] = x;
  //this condition will get true
  if(front== -1){
    front++;
  }
}
void pop(){
  if(front==-1||front>back){
    cout<<"The queue is empty there are no elements found:"<<endl;
    return;
  }
  front++;
}
int peek(){
  if(front==-1|| front>back){
    cout<<"No elements found in the queue"<<endl;
    return -1;
  }
  return  arr[front];
}
//checking if queue is empty or not
bool empty() {
  if(front==-1|| front>back){
    return true;
  }
  return  false;
}
};
int main(){
queue d;
d.push(1);
d.push(2);
d.push(3);

cout<<d.peek()<<endl;
d.pop();
cout<<d.peek()<<endl;
d.pop();
cout<<d.peek()<<endl;
d.pop();

cout<<d.empty();
  return 0;
}
