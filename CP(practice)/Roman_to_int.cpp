#include<bits/stdc++.h>
#include<string>
using namespace std;

int value(char c){
    if(c == 'I'){
        return 1;
    }
    if(c == 'V'){
        return 5;
    }
    if(c == 'X'){
        return 10;
    }
    if(c == 'L'){
        return 50;
    }
    if(c == 'C'){
        return 100;
    }
    if(c == 'D'){
        return 500;
    }
    if(c == 'M'){
        return 1000;
    }

    return -1;
}

int solve(string str){
  //intializing the result 
  int res = 0;

  //Traverse to the given input
  for (int i = 0; i < str.length(); i++)
  {
    int s1 = value(str[i]);

    if(i + 1 < str.length()){
        //getting the value of the 
        int s2 = value(str[i + 1])

        if(s1 >= s2){
            res = res + s1;
        }else{
            res = res + s2 - s1;
            i++;
        }
    }else{
        res = res + s1;
    }
  }
  return res;
}

int main()
{
 int t;
 cin>>t;
 while (t--)
 {
    string s;
    cin>>s;
    solution ob;
    cout<<ob.solve(s)<<endl;
 }
 return 0;
}