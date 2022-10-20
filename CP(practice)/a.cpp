// #include<bits/stdc++.h>
// using namespace std;

// class base{
// public:
// base(){
//   cout<<"B class\n";
// }
// ~base(){
//   cout<<"base destructor\n";
// }
// };

// class derived: public base{
// public:
// derived(){
//   cout<<"derived class\n";
// }
// ~derived(){
//   cout<<"derived destructor";
// }
// };
// int main()
// {
//   derived obj;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// void execute(int &x, int y = 200){
//   int temp = x + y;
//   if(y != 200){
//     cout<<temp<<x<<y<<"--";
//   }
// }
// int main()
// {
//   int a = 50, b = 20;
//   cout<<a<<b<<"--";
//   execute(a,b);
//   cout<<a<<b<<"--";

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//   if(0){
//     cout<<"hi";
//   }else{
//    cout<<8-4;
//   }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
 
//  class x{
//   public:
//   X(){
//     cout<<"X";
//   }
//   ~X(){
//     cout<<"~X";
//   }
//  };
//  class y: public x{
//   public:
//   Y(){
//     cout<<"Y";
//   }
//   ~Y(){
//    cout<<"~Y";
//   }
//  };
 
// int main()
// {
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
 
 class myClass{

 };
int main()
{
<<<<<<< HEAD
   int a = 1;
   switch(a){
    case 1: cout<<"one";    
    case 2: cout<<"two";    
    case 3: cout<<"three";  
    default: cout<<"Default";  
   }
    return 0;
=======
    // int a = 10;
    // int *aptr;
    // aptr = &a;

    // cout<<*aptr<<endl;  //deferencing the a pointer

    // *aptr = 45;
    // cout<<a<<endl;

    // int arr[] = {19,23,34,2};
    // int *ptr = arr;

    // for(int i=0; i<4; i++){
    //     cout<<*(arr + i)<<endl;
    //     // ptr++;
    //     //with the rerference to the pointer  
    // }

//A function pointer points to code not the data.
//Unlike other pointers we do not allocate or deallocate the memory using the function pointers.
  // void (*fun)(int) = function;
  // fun(10);

int x = 5;
if(x++ == 5){
  cout<<++x<<endl;
}
else {
 cout<<"else printed"<<endl;
}
  return 0;
>>>>>>> refs/remotes/origin/master
}