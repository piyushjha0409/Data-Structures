#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
     int a = 0;
     int b = 1;

     if(n == 0){
        return a;
     }        
     if(n == 1){
       return b;
     }
     
     int ans = fib(n-1) + fib(n-2);  //n = n-1 + n-2

     return ans;
    }
};

int main()
{

    return 0;
}