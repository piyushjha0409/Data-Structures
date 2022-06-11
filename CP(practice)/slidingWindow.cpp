#include<bits/stdc++.h>
using namespace std;

//Algorithm
char lengthOfLongestSubstring(string s){

set<char> mp;

int l=0, ans=0;

for(int i=0; i<s.length(); i++){
//if we found a repeating char then we decrease the size of the sliding window
while(mp.find(s[i]) != mp.end()){
  mp.erase(s[l]);
  l++;
}
mp.insert(s[i]);
ans = max(ans, i-l+1);
}
return ans;
}

int main()
{
 string str = "Piyuyu";
 cout<<lengthOfLongestSubstring(str)<<endl;
 return 0;
}