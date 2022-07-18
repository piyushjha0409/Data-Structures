#include<bits/stdc++.h>
using namespace std;

 /*
  

    */
 vector<int> twoSum(vector<int>& nums, int target) {
    
  vector<int> ans;
  map<int, int> mp;

  for(int i=0; i<nums.size(); i++){
    int noToFind = target - nums[i];

    //if we found the number then store in map
    if(mp.find(noToFind) != mp.end()){

      //push it into the ans vector
      ans.push_back(mp[noToFind] + 1);
      ans.push_back(i+1);
      return ans;
    }
    //if no is not found
   mp[nums[i]] = i;
  }
  return ans;
}

int main(){
	vector<int> nums = {2,7,11,15};
  cout<<twoSum(nums, 9)<<endl;
	return 0;
}