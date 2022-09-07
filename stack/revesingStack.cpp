#include<bits/stdc++.h>
using namespace std;

//function for pushin the element from bottom
void insertAtBottom(stack<int> &st, int ele){

    if(st.empty()){
        st.push(ele);
        return;
    }

    int topele = st.top();
    st.top(); 
    insertAtBottom(st,ele);

    st.push(topele);
}

//function for reversing the stack
void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int ele = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st, ele);

}
int main()
{
    stack<int> st;
    cout << "Original Stack" << endl;
    for (int i = 1; i <= 4; i++) {
        cout << i << " ";
        st.push(i);
    }
    cout << endl;
    // function to reverse
    // the stack
    reverse(st);
    cout << "Reversed Stack" << endl;
    // printing the stack after reversal
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}