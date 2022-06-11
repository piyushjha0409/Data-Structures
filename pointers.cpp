#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 8;
    int *b = &a;
    cout<<*b<<endl;
    //  *b = 78;
    int **c = &b;
    cout<<a<<endl;
    cout<<**c<<endl;

 return 0;
 
}