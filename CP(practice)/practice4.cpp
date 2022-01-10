#include<iostream>
#include<stack>
using namespace std;

int prefix(string l, int n){
  //making a stack
  stack<char>st;
  int t=0;
 for(int i=0;i<n; i++){
   if(l[i] == '<'){
     st.push('<');
   }
   else{
     if(!st.empty()){
       st.pop();
       t = t+2;
     }
     else{
       break;
     }
   }
 }
  return t;
}
int main(){
  long long  t;
  cin>>t;

  while(t--){
  string l;
  cin>>l;
  int n = sizeof(l)/sizeof(l[0]);
  int ans = prefix(l,n);
  cout<<ans<<endl;
  }
  return 0;
}
