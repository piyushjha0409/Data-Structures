#include<bits/stdc++.h>
using namespace std;

int countPrefixes(vector<string>& words, string s) {
  int counter = 0;

  for(string ss: words){
    
    //check 
    if(ss.size() > s.size()){
        continue;
    }
    bool flag = true;  //boolean to check wether two copared strings are perfix or not
    for(int i=0; i<ss.size(); i++){
        //check
        if(ss[i] != s[i]){
            flag = false;
            break;
        }
    }
    if(flag){
        counter++;
    }
  } 
  return counter;       
}

int main()
{
 vector<string> arr = {"a","b","c","ab","bc","abc"};
 string s = "abc";
 cout<<countPrefixes(arr, s)<<endl;
 return 0;
}