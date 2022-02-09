#include<iostream>
#include<vector>
using namespace std;

//function check
cieling(int *arr, int target){
  int start = 0;
  int last = arr.length() -1;
  int ans = -1;
 while(start<=end){
   int mid = start + (end-start)/2;
   if(arr[mid] < target){ //rhs
     start = mid + 1;
     
   }
   else if(arr[mid] > target){
     last = mid - 1; //lhs
   }
   else{
     //answer found
     return mid;
   }
 }
 return -1;
}
int main(){
  int t;
  cin>>t;
  int arr[] = {2,35,9,14,16,18};
  while(t--){
 int ans = cieling(arr, 15);
 return ans;
  }
}
