#include<bits/stdc++.h>
using namespace std;

//function
   int peakIndexInMountainArray(vector<int>& arr) {
       int start = 0;
       int end = arr.size()-1;
        
        while(start<=end){
            int mid = start + (end - start)/2;
            
            if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
                return mid;
            }
            else if(arr[mid] < arr[mid + 1]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
         return -1;

        
    }
int main()
{
 vector<int> arr = {0,1,2,0};
 cout<<peakIndexInMountainArray(arr)<<endl;
 return 0;
}