#include<iostream>
using namespace std;

int main(){
int t;//test case
cin>>t;

while(t--){
  int n;
  cin>>n;
  string s;
  cin>>s;
  for(int i=0; i<2*n; i++){
    int sa=0,sb=0,c=0;  //sa = total goals by team A and sb = Total goals by team B
    if(i%2==0 &&s[i]=='1'){
      sa++;
    }
    if(i%2!=0 &&s[i]=='1'){
      sb++;
    }
    if(i%2==0 &&(sa-sb)>(n-i/2-1)){
      cout<<i+1<<endl;
      c++;
      break;
    }
    else if(i%2!=0 &&(sb-sa)>(n-i/2-1)){
      cout<<i+1;
      c++;
      break;
    }
  }
if(c==0){
    cout<<(2*n)<<endl;
  }
}
return 0;
}
