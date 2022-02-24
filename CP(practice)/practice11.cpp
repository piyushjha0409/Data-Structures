#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
	  int x;
	  cin>>x;
	  string str;
	  getline(cin, str);
	  int c= 0, n = 0, d = 0;
	  
	  for(int i=0; i<14; i++){
		  if(str[i] == 'C'){
			  c++;
		  }else if(str[i] == 'N'){
			  n++;
		  }else{
		    d++; 
		}
	  }
	  if(c>n){
	    cout<<60*x<<endl;
	  }else if(c<n){
		  cout<<40*x<<endl;
	  }else{
		  cout<<55*x<<endl;
	  }
	}
	return 0;
}