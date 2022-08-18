#include<bits/stdc++.h>
using namespace std;


//finding the gcd 
long long gcd(long long a, long long b){
//gcd ka logic
 if (a == 0){
    return b;
 }
 return gcd(b % a, a);
}
//solution function 
void sol(){
    //user input of the size
    long long size;
    cin>>size;
    long long *arr = new long long[size];
    for (int i = 0; i<size; i++)
    {
       cin>>arr[i];
    }
    long long ans  = arr[0];
    for (int j = 0; j<size-1; j++)
    {
        ans = gcd(ans, arr[j+1]);

        if (ans == 1){
            break;
        }
    }
  cout<<ans*size<<endl;
    
}
int main()
{
    int t = 1;
    cin>>t;
    while(t--){
        sol();
    }
    // cout<<a<<endl;
    return 0;
}