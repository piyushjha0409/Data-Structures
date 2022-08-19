#include<bits/stdc++.h>
using namespace std;

   bool checkPalindrome(string s){
     
       for(int i=0; i<s.length()/2; i++){
           if(s[i] != s[s.length()-1]){
               return false;
           }
       }
       return true;
    }
    string firstPalindrome(vector<string>& words) {
        
       for(auto word: words){
           if(checkPalindrome(word)){
               return word;
           }
           return "";
       }
}
};
int main()
{
    return 0;
}
