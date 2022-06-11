//longest common prefix
#include<bits/stdc++.h>
#include<string>
using namespace std;

//driver solution function
string longestCommonPrefix(string arr[], int n){
//sorting all the string in the arrays
  sort(arr, arr+n);

//   for(int i=0; i<n; i++){
//       cout<<arr[i]<<" ";
//   }
 int mini = min(arr[0].length() , arr[n-1].length());
 int i = 0;
 while(i<mini){
     if(arr[0][i] == arr[n-1][i]){
         i++;
     }else{
         break;
     }
 }
 if(i == 0){    
     return "-1";
 }
 return arr[0].substr(0, i);
}   

int main()
{   int n = 3;
    string arr[n] = {"geeksforgeeks", "geeks" , "geek"};
    cout<<longestCommonPrefix(arr, n);

 return 0;
}