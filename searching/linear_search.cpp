#include<iostream>
#define MAX 10
using namespace std;

//function of finding the target element and return it
int linearSearch(int arr[],int size, int target){
	if(size == 0){
		return -1;
	}
	//run for a loop
	for(int i=0; i<size; i++){
		//check for the element at every index if it is target
		if(arr[i] == target){
		 return i;
		}
	}
	return -1;
}
int main(){
	int arr[] = {12,14,66,71,23,89};
    int answer = linearSearch(arr,10, 23);
	cout<<"The target element is at the index of "<<answer;
	return 0;
}
