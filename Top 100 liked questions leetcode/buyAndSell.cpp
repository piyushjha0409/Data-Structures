#include<bits/stdc++.h>
using namespace std;


/*  
[7,1,5,3,6,4]
 int n ; int p;
 n - p = max
  two pointer approach 


*/
int maxProfit(vector<int>& prices) {

int mini = prices[0];
int profit = 0;

for(int i=0; i<prices.size(); i++){

	if(prices[i] < mini){
		//update my mini
		mini = prices[i];
	}
	else if(prices[i] - mini > profit){
		//update my profit 
		profit = prices[i] - mini;
	}
} 
return profit;
}

int main(){

	vector<int> lol  = {1,3,47,2};
	cout<<maxProfit(lol);
	
	return 0;
}