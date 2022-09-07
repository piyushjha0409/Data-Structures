#include<bits/stdc++.h>
using namespace std;

int reverse(vector<char>&s, int left, int right){

if(left >= right){
    return;
}
swap(s[left++], s[right--]);
reverse(s, left, right);
}

int main()
{

    return 0;
}