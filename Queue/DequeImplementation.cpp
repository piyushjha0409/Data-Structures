#include<bits/stdc++.h>
using namespace std;

void showDeque(deque<int> g){
    deque<int>::iterator it;
    for(it = g.begin(); it != g.end(); ++it){
        cout<< '\t' << *it;
    }
    cout<< '\n';
}

int main()
{
    deque<int> gquiz;
    gquiz.push_back(9); //for pushing the elements from the back 
    gquiz.push_front(8); //for pushing the elements from the front 
    showDeque(gquiz);

    //pop the elements from the front 
    gquiz.pop_front();
    showDeque(gquiz);
    return 0;
}