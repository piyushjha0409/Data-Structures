#include<iostream>
#include<string>
using namespace std;

void relational_operations(string s1, string s2){
  if(s1 != s2){
    cout<<s1<<" is not equal to  the "<<s2<<endl;
   if(s1>s2){
     cout<<s1<<" is greater than the "<<s2<<endl;
   }
   else{
     cout<<s2<<" is greater than the "<<s1<<endl;
   }
  }
  else{
    cout<<s1<<" is equal to the "<<s2<<endl;
  }

}
int main(){
string s1("Piyush");
string s2("Jha");
relational_operations(s1, s2);
string s3("Gomtam");
string s4("Gomtam");
relational_operations(s3,s4);
return 0;
}
