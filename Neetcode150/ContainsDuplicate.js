/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let hashMap = {};
    
    for(let i=0;i<nums.length-1;i++){
        if(hashMap[nums[i]]){
            return true;
        }else{
            hashMap[nums[i]]=true
        }
    }
    return false
    
};

console.log(containsDuplicate())