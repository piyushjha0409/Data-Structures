#include<bits/stdc++.h>
using namespace std;

   int minMaxGame(vector<int>& nums){
        
    while(nums.size() != 1){                    
    vector<int> temp;
    int ok = 1;
    for( int i=0; i<nums.size(); i+=2){
    if(ok){
    temp.push_back(min(nums[i], nums[i + 1]));
    ok = 0;
    }else{
    temp.push_back(max(nums[i], nums[i 1]));
    ok = 1;
    }
    }
    nums.clear(); //clearing the array 
    nums = temp; //replacing the array 
    }
    return nums[0];
  }

int main()
{
 int ans = minMaxGame(1,2,3,6,1,4);
 cout<<ans<<endl;
 return 0;
}