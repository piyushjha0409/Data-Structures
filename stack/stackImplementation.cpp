//Stack is the oredered collection of items and is linear data structure and works in LIFO arrangement

#include<bits/stdc++.h>
#include<stack>
#define size 10
using namespace std;

class Stack{
int a[size];  //array which can store the maximum 5 elements
int top;  //it will push to the last item that was pushed onto the stack

public: 
//Constructor
Stack(){
    top = -1;  //if stack is empty
}


//function for pushing the element 
void push(int item){
    if (top == size-1)
    {
    cout<<endl<<"Stack Overflow";
    }else{
        top++;
        a[top] = item;
    }
}

//function for removing the element
void pop(){
    if (top == -1)
    {
     cout<<endl<<"Stack Underflow";
     return;
    }
    top--;
}

//function for displaying the stack 
void display(){
    for(int i=top;i>=0; i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
};
int main()
{

Stack s1;
s1.push(7);
s1.push(9);
s1.display();
s1.pop();
s1.display();

// do{
// 		cout<<"Enter the option number to perform specific operations:"<<endl;
// 		cout<<"1.Push()"<<endl;
// 		cout<<"2.Pop()"<<endl;
// 		cout<<"3.Count()"<<endl;
// 		cout<<"4.Change()"<<endl;
// 		cout<<"5.Display()"<<endl;
// 		cout<<"6.Check StackUnderFlow()"<<endl;
// 		cout<<"7.Check Stack OverFlow()"<<endl;
// 		cout<<"8.Peek()"<<endl;



// 	cin>>option;

// 	//switch case
// 	switch(option){

// 	 case 0:
// 	 	break;
// 	 case 1:
// 	 	cout<<"Enter the item to Push:\n"<<endl;
// 		cin>>value;
// 		s1.push(value);
// 	    break;
// 	 case 2:
// 	 	cout<<"Pop function called: "<<s1.pop()<<endl;
// 	 	break;
// 	 case 3:
// 	 	cout<<"Counting the total values present in the stack: "<<s1.count()<<endl;
// 	 	break;
// 	 case 4:
// 	 	cout<<"Enter the position for change"<<endl;
// 	 	cin>>position;
// 	 	cout<<"Enter the value :"<<endl;
// 	 	cin>>value;
// 	 	s1.change(position, value);
// 	 	break;
// 	 case 5:
// 	 	cout<<"Displaying the stack: "<<endl;
// 	 	s1.display();
// 	 	break;
// 	 case 6:
// 	 	cout<<"Check for the Stack Empty or not "<<s1.isEmpty()<<endl;
// 	 	break;
// 	 case 7:
// 	 	cout<<"Check for the stack is Full or not \n"<<s1.isFull()<<endl;
// 	 	break;
// 	 case 8:
// 	 	cout<<"Enter the position for the peek"<<endl;
// 	 	cin>>position;
// 	 	cout<<"Peek function called the value at position "<<position<<" is "<<s1.peek(position)<<endl;
// 	 default:
// 	 	cout<<"Please Enter the correct option number for the operation:"<<endl;
// 	}

//     }while(option != 0);

	return 0;
}
