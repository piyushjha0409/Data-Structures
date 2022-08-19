#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
      int count = 0;
      for(string word: words){
        if(word.length() < pref.length()){
          continue;
        }
        if(word[0] == pref[0]){
          for (int i = 0; i < pref.length(); i++)
          {
            if(word[i] != pref[i]){
              break;
            }
            if(i == pref.length() - 1){
              count++;
            }
          }
        }
      }
      return count;
    }
};
int main()
{
    
    return 0;
}