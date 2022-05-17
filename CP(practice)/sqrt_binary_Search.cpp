#include <bits/stdc++.h>
using namespace std;

// function
int mySqrt(int x){
    int start = 0;
    int end = x/2;
    int ans = 0;
    while (start <= end)
    {
        double mid = start + (end - start)/2;
       if(mid * mid <= x){
           ans = mid;
           start = mid + 1;
       }
       else{
           end = mid -1;
       }
}
    return ans;
}
int main()
{
  int num = 7;
  cout<<mySqrt(num)<<endl;
  return 0;
}