var twoSum = function(nums, target) {
    
    var map = new Map()

    for(let i=0; i<nums.length; i++){
        let diff = target - nums[i] // diff = 2

        if(map.has(diff)){
            console.log(map.get(diff))
            console.log(i)
            return [map.get(diff), i]
        }

        map.set(nums[i], i)
    }
};