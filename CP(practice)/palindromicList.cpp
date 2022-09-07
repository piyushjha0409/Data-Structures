#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(ListNode* head) {

       ListNode * ptr = head;
       vector<int>v1;
       vector<int>v2;
       
       while(ptr != NULL){
        v1.push_back(ptr->val);
        ptr = ptr->next;
       }
       v2 = v1;

       //reversing the linked list
       reverse(v2.begin(), v2.end());
       if(v1 == v2){
        return true;
       }else{
        return false;
       }
    }
};

// 1->2->2->1
// return true if its palindromic 
//if 

int main()
{

    return 0;
}