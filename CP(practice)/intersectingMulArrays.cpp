#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<vector<int>>& nums) {
   
    vector<int> ans;
    int n = nums.size();

    map<int , int>mp;

   for(int i=0; i<n; i++){
   	 for(int j=i; j<nums[i].size(); j++){
   	 	mp[nums[i][j]++];
   	 }
   }

   //iterating the map
   for(auto i: mp){
   	if(i.second == n){
      ans.push_back(i.first);
   	}
   }
   return ans;
}


int main(){
    cout<<intersection(arr);
	return 0;
}