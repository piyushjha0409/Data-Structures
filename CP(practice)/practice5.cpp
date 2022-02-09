#include<bits/stdc++.h>
using namespace std;
#define MAX 10

//function for reversing the array
void reverse(int arr[], int n){
 for(int i=0; i<n-1; i++){
     int temp = arr[i];
     arr[i] = arr[n-1];
     arr[n-1] = temp;
     n = n - 1;   
 }
}
int main()
{
 int n; //no of the integers in the array
 cin>>n; //taking the user input
 
 int arr[MAX];
 for(int i=1; i<n; i++){
     cin>>arr[i];
 }
 cout<<reverse(arr, n)<<endl;

 return 0;
}