#include<bits/stdc++.h>
using namespace std;

//valid paranthesis
/* 
Step1: initializing the stack
Step2: check if the first letter in the stack is "(" , "{", "[" or not


 */
bool isValid(string s) {
   stack <char> st;

   for(int i=0; i<s.size(); i++){
   	if(s[i] == '(' || s[i] == '{' || s[i] == '['){
   		st.push(s[i]); 
   	}
   	//check if there is no opening bracket at all
   	else{
      if(st.empty()){
        return false;
        break;
   	}
   		char c = st.top();
   		st.pop();

   		if((s[i] == ')' && c != '(') || (s[i] == '}' && c != '{') || (s[i] == ']' && c != '[')){
           return false;
            st.pop();
   		}
   }
}
      //after the for loop if the stack is empty then it is balanced or it is not balanced
    return st.empty();
}

int main(){
	string str = "(}{})";
   cout<<isValid(str)<<endl;
	return 0;
}