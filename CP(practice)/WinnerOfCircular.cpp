#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
 void solve(vector<int> v,int k, int index, int &ans){

    if(v.size() == 1){
        ans = v[0];
        return;
    }
    index = (index + k)%(v.size()); // index =  (1 + k)%3
    v.erase(v.begin() + index);
    solve(v, k, index, ans);
    return;
 }

 int findTheWinner(int n, int k){
    vector<int> v;
    for(int i=1; i<=n; i++){
        v.push_back(i);
    }
    int index  = 0;
    k--;
    int ans = 95;
    solve(v, k, index, ans);
    return ans;
 }
};

int main()
{
  
  return 0;
}