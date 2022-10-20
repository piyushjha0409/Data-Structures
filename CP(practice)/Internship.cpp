// Write a program that takes as input a sorted array of numbers. The objective is to return the array arranged in an 
// alternate order such that max value is followed by min value in a descending fashion, so that the 1st element is the 
// max value, 2nd element is the min value, 3rd element is the second max value, 4th element is the second min value & 
// so on.


#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> arr, int size){
vector<int> ans;  //values will be stored here
int max = arr[0];
int min = arr[0];

for(int i=0; i<size; i++){
  if(max < arr[i]){
    max = arr[i];
  }
  if(min > arr[i]){
    min = arr[i];
  }
}
//now we  got max and min
ans.push_back(max);
ans.push_back(min);

return ans;
}

int main()
{
    vector<int> arr;
    //input the size of the array
    int size;
    cin>>size;

    int a;

    for(int i=0; i<size; i++){
        cin>>a;
        arr.push_back(a);
    }

    //now we have arr of size

  cout<<solve(arr, size);


    return 0;
}