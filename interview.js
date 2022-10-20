let a = ['20']
let b = [20]
console.warn(a[0] == b[0])
console.warn(a[0] === b[0])  // three equals means it will compare the type as well

let x = [1,3,21,12]
console.log(...x)

const set = new Set([1, 21, 1,2 ,1])
console.log(set) 

let data = {name : "anil", age:  56, skills: "64"}
console.log(data, data.age)