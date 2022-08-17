#include<bits/stdc++.h>
#include<list>
using namespace std;
 

void display(list<int> &list1){

list<int> :: iterator iter;

for(iter = list1.begin(); iter != list1.end(); iter++){
    cout<<*iter<<" ";
}
}
int main()
{
  list<int> mp;
  mp.push_back(5);
  mp.push_front(7);
  display(mp);
  mp.reverse();
  cout<<"\nAfter reversing the list:"<<endl;
  display(mp);
  return 0;
}