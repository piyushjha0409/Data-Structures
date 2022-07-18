#include<bits/stdc++.h>
using namespace std;

/* Algorithm 

Step1: create a ans vector
Step 2: For Loop through the given vector 
Step 3: check the element already exist or not 
Step 4: of not then push it to the vector 
Step 5: if it exist already exist then just increment

*/

int removeDuplicates(vector<int>& nums) {
  
  int count = 0;
  int n = nums.size();

 for(int i=1; i<n; i++){

 	if(nums[i] == nums[i-1]){
 		count++;
 	}else{
 		nums[i-count] = nums[i];
 	}
 }
 return n - count;
}

int main(){
	vector<int> ans = {1,2,3,3,4};
	cout<< removeDuplicates(ans);
	return 0;
}