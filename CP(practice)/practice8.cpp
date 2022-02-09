#include<iostream>
#include<string>
using namespace std;

//function for checking the palindrome
bool antiPalindromic(string str, int n){
    for(int i=i; i<n/2; i++){
        if(str[i] == n-i-1){
            return true;
        }
    }
    return false;
}

//function for checking the permutation of the String
void permutation(string str, int r, int l){ //r = first index of the string and l = last index of the string
if(r == l){
    cout<<str<<endl;
}
for(int i=r; i<=l; i++){
 swap(str[r], str[i]);
 permutation(str, r+1, l);
 swap(str[l], str[i]); //for that last permutation
}
}

int main()
{
 int t;
 cin>>t;
 while(t--){
     int n; //length of the string s
     cin>>n;
     string str;
     getline(cin,str);
     permutation(str, 0, n-1);

 }
 return 0;
}