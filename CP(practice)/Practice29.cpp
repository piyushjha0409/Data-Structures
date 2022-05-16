#include <bits/stdc++.h>
using namespace std;

    // function for the pivot
int FindPivot(vector<int>nums)
{
    int start = 0;
    int end = nums.size() - 1;
    int ans = 0;
    while (start <= end)
    {

        int mid = start + (end - start) / 2;
        if (nums[mid] < nums[0]){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }  
    }
    return ans;
}

// binarySearch
int binarySearch(vector<int> nums, int target, int start, int end)
{
while (start <= end)
{
int mid = start + (end - start) / 2;

if (nums[mid] == target) return mid;
else if (nums[mid] < target)  start = mid + 1;
else  end = mid - 1;
}
return -1;
}
// solution function
int search(vector<int> nums, int target)
{
    int pivot = FindPivot(nums); // isse mujhe pivot ka index mil jaega
    int ans = binarySearch(nums, target, 0, pivot - 1);

    if(ans != -1){
        return ans;
    }else{
        ans = binarySearch(nums, target, pivot, nums.size()-1);
    }
    return ans;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    // cout << FindPivot(arr) << endl;
    cout<<search(nums, target);

    return 0;
}