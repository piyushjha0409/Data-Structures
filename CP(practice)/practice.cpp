#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void duplicate(char* str){
    vector<int> count(128);
    
    for(int i=0; i<strlen(str); i++){
      count[(str[i])]++;
    }

    //printing the duplicates
    for(int i=0; i<count.size(); i++){
        if(count[i] > 1){
            
        }
    }
}
int main()
{

 return 0;
}