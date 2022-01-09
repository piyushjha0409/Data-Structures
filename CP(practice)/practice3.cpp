#include<iostream>
using namespace std;

int main(){
 long long t; //test cases
 cin>>t;

 while(t--){
 long long n,l, max; //where is the total no of max tokens and l is the choosing integer
 cin>>n>>l;
 max = l;
 for(long long i=1; i<n; i++){
   long long s;
   cin>>s;
   l = min(s , l);
   max += l;
 }
 cout<<max<<endl;
 }
  return 0;
}
