#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        deque<int> Qi(k);

        for(int i=0; i<k; i++){
            //for every element , the previous smaller elements are useless so 
            //remove them from Qi
            while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]){
                Qi.pop_back(); //remove from rear
            }
        //Add new element at rear of queue
        Qi.push_back(i);
    } 

     // Process rest of the elements i.e from arr[k] to arr[n-1]
     for(int i=k; i<n; ++i){
      //the element at the  front of the queue is the largest element of 
      //previous window, so print it
      cout<< arr[Qi.front()]<<" ";

      //remove the elements which are out this window
      while((!Qi.empty()) && Qi.front() <= i - k) {
        Qi.pop_front(); //Remove from front of queue
      }

      //Removing all element smaller than currently
      while((!Qi.empty() && arr[i] >= arr[Qi.back()]){
        Qi.pop_back();
      }

      //Add current element at the rear of Qi
      Qi.push_back(i);
     }   

     //print the max element of the last window
     cout<< arr[Qi.front()];
    }
};

int main()
{
    return 0;
}