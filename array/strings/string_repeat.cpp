#include<iostream>
#include<string>
using namespace std;

string repeat(string s, int n){
  //copying the given string to temporary string
  string s1 = s;

  for(int i=1; i<n; i++){
    s += s1; //concatenating the strings
  }
  return s;
}
int main(){
  //Driver code
string s = "geeks";
int n = 3; //no of repetitions
cout<<repeat(s, n)<<endl;

  return 0;
}
