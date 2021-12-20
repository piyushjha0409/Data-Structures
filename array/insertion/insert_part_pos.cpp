#include<iostream>
using namespace std;

void display (int arr[], int n){
	//code for traversal
	for (int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
	cout<<endl;
}
int sortedInsertion(int arr[100], int size, int index , int element , int capacity){
	if(size>=capacity){
		return -1;
	}
	else{
		for(int i=size-1; i>=index; i--){
			arr[i+1] = arr[i];
		}
			arr[index] = element;
			return 1;
	}
}
int main(){
	int arr[] = {4,5,7,1,9,3};
	int size = 5;
	int index = 3;
	int element = 2;
	
	display(arr, size);
	sortedInsertion(arr,size,index,element,100);
	size += 1;
	display(arr,size);
	return 0;
}
