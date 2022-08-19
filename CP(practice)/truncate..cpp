#include<bits/stdc++.h>
#include<string>
using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
     //String = "hello how are you "     
     string ans = " ";
     int count;
     for (char ch: s)
     {
        if (ch == ' '){
            count++;
        }
        if(count == k){
            break; 
        }
        ans.push_back(ch);
     }
     return ans;
    }
};

int main()
{
    return 0;
}