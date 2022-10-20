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
   int a = 1;
   switch(a){
    case 1: cout<<"one";    
    case 2: cout<<"two";    
    case 3: cout<<"three";  
    default: cout<<"Default";  
   }
    return 0;
}