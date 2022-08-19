#include<bits/stdc++.h>
#include<map>
using namespace std;

// class Solution {
// public:
//     string kthDistinct(vector<string>& arr, int k) {
//         //creating  a map
//         unordered_map<string, int> mp;
        
//         for(auto s: arr){
//             ++mp[s];
//         }

//         for(auto word: arr){
//             if(mp[word] == 1 && --k == 0){
//                 return word;
//             }
//         }
//         return "";
//     }
// };

//Solution: 2
string kthDistinct(vector<string> &arr, int k){
    //making an unordered map
    unordered_map<string , int> mp;

    for(int i=0; i<arr.size(); i++){
        mp[arr[i]]++;
    }
    //initializing the count variable
    int count =  0;
    for(int i=0; i<arr.size(); i++){
        if(mp[arr[i]] == 1){
            if(++count == k){
                return arr[i];
            }
        }
    return "";
    }
}
int main()
{
    return 0;
}