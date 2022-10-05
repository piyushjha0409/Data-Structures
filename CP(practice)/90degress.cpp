#include<bits/stdc++.h>
using namespace std;

/* Brute force solution 
we have to make rows to columns and columns to rows

*/ 
class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        //making a matrix according to the size
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                cin>>matrix[i][j];
            }
        }
        //for printing the matrix
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                cout<<matrix[i][j];
            }
        }
        
    } 
};

int main()
{

    
    return 0;
}