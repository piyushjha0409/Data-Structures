#include <iostream>
using namespace std;

void printArray(int arr[],int n){
	
	for(int i=0; i<n; i++){
	  cout<<" "<<arr[i];
	}
}
void sortArray(int arr[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[i]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
				
			}
		}
	}
}
int main(){
    
    int arr[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(arr, n);
    sortArray(arr, n);
    cout<<endl;
    printArray(arr, n);
    
    return 0;
}
