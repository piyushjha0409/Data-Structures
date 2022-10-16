#include<bits/stdc++.h>
using namespace std;
 
class Solution{

    public:
    vector<vector<int>> levelOrder(TreeNode* root){

    vector<vector<int>> ans;

    if(root == NULL){
        return ans;
    }
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){

        vector<int> v;
        for(int i=0; i<q.size(); i++){

            TreeNode* temp = q.front();
            q.pop(); //popping the element

            if(temp->left != NULL) q.push(temp->left);

            if(temp->right != NULL)  q.push(temp->right);

            v.push_back(temp->val);
        }
        ans.push_back(v);
    }
    return ans;
    }
};
int main()
{
    return 0;
}