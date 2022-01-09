#include<iostream>
using namespace std;

class Stack{
	private:
		int top;
		int arr[5]; //size = 5 so then size-1 = 4

	public:
	 Stack(){ //constructor
	 	top = -1;  //at first the stack is empty
	 	for(int i=0; i<5; i++){
	 		arr[i] = 0;
		}
	 }
	 bool isEmpty(){
	 	if(top==-1){
	 		return true;
		 }
		 else{
		 	return false;
		 }
	 }
	 bool isFull(){
	 	if(top==4){
	 		return true;
		 }
		 else{
		 	return false;
		 }
	 }
 void push(int val){
	 	//check if the stack is full or not
	 	if(isFull()){
	 		cout<<"The stack is Overflowed!"<<endl;
		 }
		 else{
	     //increase the value of the top by 1
	     top++;
	     //Push the value at that particular position
	     arr[top] == val;

		 }
	 }
 int pop(){
	 	//check wether the stack is empty or not
	 	if(isEmpty()){
	 		cout<<"The Stack is Underflow!"<<endl;
	 		return 0;
		 }
		 else{
		 	 int popValue = arr[top];
		 	 arr[top] = 0;
		 	 top--;
		 	 return popValue;
		 }
	 }
 int count(){
	 	return (top+1);
	 }
 int peek(int pos){
	   if(isEmpty()){
	   	cout<<"Stack Underflow!"<<endl;
	   }
	   else{
	   	return arr[pos];
	   }
	 }
 void change(int pos, int val){
	 	arr[pos] = val;
	 	cout<<"Item changed at  location"<<pos<<endl;
	 }
 void display(){
  	for(int i=4; i>=0; i--){
  		cout<<arr[i]<<" ";
	  }
  }

};

int main(){
	//switch case approach
	Stack s1;
	int position, value, option;

	//Take the user input
	do{
		cout<<"Enter the option number to perform specific operations:"<<endl;
		cout<<"1.Push()"<<endl;
		cout<<"2.Pop()"<<endl;
		cout<<"3.Count()"<<endl;
		cout<<"4.Change()"<<endl;
		cout<<"5.Display()"<<endl;
		cout<<"6.Check StackUnderFlow()"<<endl;
		cout<<"7.Check Stack OverFlow()"<<endl;
		cout<<"8.Peek()"<<endl;



	cin>>option;

	//switch case
	switch(option){

	 case 0:
	 	break;
	 case 1:
	 	cout<<"Enter the item to Push:\n"<<endl;
		cin>>value;
		s1.push(value);
	    break;
	 case 2:
	 	cout<<"Pop function called: "<<s1.pop()<<endl;
	 	break;
	 case 3:
	 	cout<<"Counting the total values present in the stack: "<<s1.count()<<endl;
	 	break;
	 case 4:
	 	cout<<"Enter the position for change"<<endl;
	 	cin>>position;
	 	cout<<"Enter the value :"<<endl;
	 	cin>>value;
	 	s1.change(position, value);
	 	break;
	 case 5:
	 	cout<<"Displaying the stack: "<<endl;
	 	s1.display();
	 	break;
	 case 6:
	 	cout<<"Check for the Stack Empty or not "<<s1.isEmpty()<<endl;
	 	break;
	 case 7:
	 	cout<<"Check for the stack is Full or not \n"<<s1.isFull()<<endl;
	 	break;
	 case 8:
	 	cout<<"Enter the position for the peek"<<endl;
	 	cin>>position;
	 	cout<<"Peek function called the value at position "<<position<<" is "<<s1.peek(position)<<endl;
	 default:
	 	cout<<"Please Enter the correct option number for the operation:"<<endl;
	}

    }while(option != 0);

	return 0;
}
