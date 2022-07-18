#include<bits/stdc++.h>
using namespace std;


int searchInsert(vector<int>& nums, int target) {
 
int start = 0;
int end = nums.size()-1;
int mid = end - (start + end)/2;

if(target < nums[start]){
	return 0;
}
if(target > nums[end]){
	return end + 1;
}

while(start < end){
	if(nums[mid] == target){
		return mid;
	}
	else if(nums[mid] > target){
		end = mid;
	}
	else{
		start = mid + 1;
	}

	mid = end - (start + end)/2;
}
return end;

}

int main(){
	
	vector<int> ok = {1,2,3,5,6};
	int target = 4;

	cout<<searchInsert(ok, target);
	return 0;
}