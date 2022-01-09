#include<iostream>
using namespace std;

int main(){
int t,n,s,v,p;
long long k , max;
cin>>t;
while(t--){
  cin>>n;
  max=0;
while(n--){
    k=0;
    cin>>s>>p>>v; // 2  6 6
    k = (p/(s+1))*v;
    if(k>max){
      max = k;
  }
}
cout<<max<<endl;
}
  return 0;
}
// 2 Test case
// 3 intger N
// 4 6 8  s p v
// 2 6 6  s p v
// 1 4 3  s p v
// 1  Integer N
// 7 7 4  s p v
