#include<bits/stdc++.h>
using namespace std;

//function for removing the special characters
int isVal(string s){
 string temp = ""
 for(int i=0; i<s.size(); i++){
     if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
         temp = temp + s[i];
     }
 }
}

bool checkPalindrome(string s){
int start = 0;
int end = s.length();

while(start<=end){
    if(iswalnum(s[start]) == 0){
        start++;
    }
    else if(iswalnum(s[end]) == 0){
        end--;
    }
    else{
        start++;
        end--;
    }
}
return true;
}

int main()
{
 string s = "Piyush";
 
 return 0;
}