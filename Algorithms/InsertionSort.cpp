#include<bits/stdc++.h>
using namespace std;

//Driver Function
void sort(int arr[], int n){
 int key, j;
 for(int i=0; i<n; i++){
     key = arr[i];
     j = i-1;

    while(j>= 0 && arr[j] > key){
        swap(arr[j], arr[j+1]);
        j--;
 }
 arr[j+1] = key;
 }

}
int main()
{
int n;
cin>>n;
int *arr = new int[n];
//taking the user input
 for(int i=0; i<n-1; i++){
     cin>>arr[i];
 }cout<<endl;

sort(arr, n);

//printing the array
for(int i=0; i<n-1; i++){
  cout<<arr[i]<<" ";
}cout<<endl;

 return 0;
}