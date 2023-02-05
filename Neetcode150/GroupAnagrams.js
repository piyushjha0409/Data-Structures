var groupAnagrams = function(strs){

    let obj = {} //creating and empty object 

    for(let str of strs){
    
        let letters = str.split("").sort().join("")
        console.log(letters)
        obj[letters] ? obj[letters].push(str) : obj[letters] = [str];

    }
    return Object.values(obj)
}
var strs = ["eat","tea","tan","ate","nat","bat"]
console.log(groupAnagrams(strs))