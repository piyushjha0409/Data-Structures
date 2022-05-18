#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &arr){
    unordered_map<int, bool>mp;
    for (int i = 0; i < arr.size(); i++){
      if(mp[arr[i+1]] == 1 || (mp[arr[i/2]] == 1 && arr[i]%2 == 0)){
          return true;
      } 
      mp[arr[i]] = 1;
    }
    return false;
}
int main()
{
 vector<int> arr = {1,4,9,8};
 
 bool ans = check(arr);
 cout<<ans<<endl;

 
 
 return 0;
}