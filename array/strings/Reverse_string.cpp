#include<iostream>
#include<string>
using namespace std;

void reverse(string& s){
  int n = s.length();

//swapping the characters from the two
  for(int i=0; i<n/2; i++){
    swap(s[i], s[n-i-1]);
  }
}
int main(){
string s = "Piyushkumarjha";
cout<<"The original string is : "<<s<<endl;
reverse(s);
cout<<"After reversing the string : "<<s<<endl;
return 0;
}
