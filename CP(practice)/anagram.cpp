#include<bits/stdc++.h>
using namespace std;

class solution{

// string a = "piyush" and string b = "ypishu"
bool isAnagram(string a, string b){

//creating a hash frequency map
unordered_map<char, int> freq;

//if the length of both the strings are not same
    if(a.length != b.length){
       return false;
    }

//storing frequency of count characters of string a
 for(int i=0; i<a.size(); i++){
    freq[a[i]]++;
 }
// It will count the no of characters
 //checking freq to join b string

 for(int i=0; i<b.size(); i++){
    //if freq character is greater than 0 then it means charcter is present
    //so decrease it by 1
    if(freq[b[i]] > 0){
        freq[b[i]]--;
    }else{
        return false;
    }
 }
 return true;
}
};
int main()
{

    return 0;
}