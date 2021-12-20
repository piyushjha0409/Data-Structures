#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
 int i, size, *arr, pos;
 
 cout<<"Enter the size of the array: "<<endl;
 cin>>size;
 
 arr = (int *)calloc(size, sizeof(int));

//taking the array input
cout<<"Enter the elements of the array: "<<endl;
for(int i=0; i<size; i++){
	cin>>arr[i];
}

//taking the position input 
cout<<"From which pos you want to delete the element: "<<endl;
cin>>pos;

//code for deletion 
if(pos<0 || pos>size){
	return -1;
}
else{
	for(int i=pos-1; i<size-1; i++){
		arr[i] =arr[i+1];
	}
}
size--;

//printing the array after the deletion
for(int i=0; i<size; i++){
	cout<<" "<<arr[i];
}
  	
	return 0;
}