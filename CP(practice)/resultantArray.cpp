#include<bits/stdc++.h>
using namespace std;

//driver function
vector<string> removeAnagrams(vector<string>& words) {
  for(int i=0; i<words.size(); i++){
    string s1 = words[i];
    string s2 = words[i+1];
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1 == s2){
        words.erase(words.begin()+(i+1));
        i = -1;
    }
  }    
  return words;    
}
int main()
{
 cout<<removeAnagrams()

 return 0;
}