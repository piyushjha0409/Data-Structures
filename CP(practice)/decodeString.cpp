#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

 string helper(string s , int i, int n){
  string res = "";

  while(s[i] != ']' && i != n){

    if(s[i] > 58){
        res += s[i];
        i++;
    }else{

        //number aagya 
        int temp = 0;
        while(s[i] != '['){

            temp = temp * 10 + (s[i] - '0');
            i++;
        }

        //this outer number can be of 2 digits as well
        // cout<<temp;

        //andar wala solve krna hoga 
        string sol =helper(s, i+1 , n);

        // jitni baar repeat krna hoga kro
        while(temp--){
            res += sol;
        }

        //making a stack
        stack<char> st;
        st.push('[');
        while(!st.empty()){
            i++;
            if(s[i] == '['){
                st.push('[');
            }
            else if(s[i] == ']'){
                st.pop();
            }
        }
        i++;
    }
  }
  return res;
 }

 //DRIVER FUNCTION 
string decodeString(string s) {

      int n = s.size();
      return helper(s, 0, n); 
    }
};

int main()
{
    Solution O;
    O.decodeString("3[a2[c]]");
    return 0;
}