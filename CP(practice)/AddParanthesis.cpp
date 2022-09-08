#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        //creating an answer vector
        vector<int> ans;
        for(int i=0; i<expression.size(); i++){
            if(expression[i]=='+'||expression[i]=='-'||expression[i]=='*'){
                vector<int> ans1 = diffWaysToCompute(expression.substr(0, i));
                vector<int> ans2 = diffWaysToCompute(expression.substr(i+1))

                for(int j: ans1){

                    for(int k: ans2){
                        if(expression[i] == '+'){
                            ans.push_back(k+j);
                        }
                        if(expression[i] == '-'){
                            ans.push_back(j-k);
                        }
                        if(expression[i] == '*'){
                            ans.push_back(j*k);
                        }
                    }
                }
            }
        }
        if(ans.size() == 0){
            ans.push_back(stoi(expression));
        }
        return ans;
    }
};

int main()
{
    return 0;
}