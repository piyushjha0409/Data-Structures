#include<bits/stdc++.h>
using namespace std;

pair<long long , long long> getMinMax(long long arr[], int n){
 long long min = arr[0];
 long long max = arr[0];

 for(int i=1; i<n; i++){
     if(arr[i] < min){
         arr[i] = min;
     }
     if(arr[i] > max){
         arr[i] = max;
     }
 }
 pair<int , int> ans = {min, max};
 return ans;
}
int main()
{
 int n;
 cin>>n;
 int *arr = new int [n];

 for(int i=0; i<n-1; i++){
     cin>>arr[i];
 }cout<<endl;

 return 0;
}