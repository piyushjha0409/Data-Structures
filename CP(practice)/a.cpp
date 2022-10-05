#include<bits/stdc++.h>
using namespace std;

//this function will return nothing
void function(int a){
    cout<<"This is a function which will be called by function pointer ";
}

int main()
{
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
  void (*fun)(int) = function;
  fun(10);
  return 0;
}