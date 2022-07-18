#include<bits/stdc++.h>
using namespace std;

/* 
 Logic 
            l
 arr = [1,3,12,0,0]
                 r

 for(int  i=0; i<arr.size(); i++){
	
 }

 */
void moveZeroes(vector<int>& nums) {

int n = nums.size();
if(n == 0 || n == 1){
	return;
}

int l = 0;
int r = 0;

while(r < n){
	if(nums[r] == 0){
		r++;
	}
	else{
		int temp = nums[l];
		nums[l] = nums[r];
		nums[r] = temp;
        l++;
		r++;
	}
  }
    
}


int main(){
	vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);

   for(int i=0; i<nums.size(); i++){
   	
   }
  	return 0;
}