#include<bits/stdc++.h>
#include<map>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       int c = s.size();
       //making a map function 
       unordered_map<char,int>mp;

       for(int i=0; i<allowed.size(); i++){
        mp[s[i]] = 1;
       } 

       for (int i=0; i<word.size(); i++){
        for(int j=0; j<word.size(); j++){

            if(mp[word[i][j]]  != 1){
                c--;
                break;
            }
        }
       }
       return c;
    }
};

int main()
{
    return 0;
}