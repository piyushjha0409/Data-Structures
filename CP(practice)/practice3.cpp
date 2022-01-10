#include<iostream>
using namespace std;

int main(){
 long long t; //test cases
 cin>>t; //t = 1

 while(t--){
 long long n,l, max; //where is the total no of max tokens and l is the choosing integer
 cin>>n>>l; //n = 3 and l = 2 max = 2
 max = l;
 for(long long i=1; i<n; i++){
   long long s;
   cin>>s;  //s = 1
   l = min(s , l);
   max += l;
 }
 cout<<max<<endl;
 }
  return 0;
}
