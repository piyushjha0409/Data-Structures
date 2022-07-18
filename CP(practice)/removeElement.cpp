#include<bits/stdc++.h>
using namespace std;


int removeElement(vector<int>& nums, int val) {
    
    for(int i=0; i<nums.size(); i++){
    	if(nums[i] == val){
    		nums.erase(i);
    	}
    }
    return nums.size();
}
int main(){
	
	return 0;
}