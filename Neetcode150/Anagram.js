/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
function isAnagram(s, t) {
    
    
    if(s.length !== t.length){
      return false
    }
   
    //make a hashmap for the unique values
    let counter = {}
    for(let letter of s){
      counter[letter] = (counter[letter] || 0) + 1
      console.log(counter[letter])
    }   
    
    // let countT = {}
    // for(let letter2 of t){
    //     countT[letter2] = (countT[letter2] || 0) + 1
    //     console.log(countT[letter2])
    // }
//  {l:1, h:1, e:1, o:1}
    for(let items of t){
      console.log(counter[items])
      if(!counter[items]){
        return false
      }
      counter[items] -= 1
    }

    return true
}

const check = isAnagram("hello", "llleo")
console.log(check)