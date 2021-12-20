//insertion of element in the array
#include<stdio.h>

void display(int arr[], int n){
  // traversal
  for(int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]); 
  }
  printf("\n");
}  

int sortedInsertion(int arr[100], int size, int capacity, int element, int index){
  //code for insertion 
  if(size>=capacity){
         return -1;
  }
  for(int i = size-1; i >=index; i--)
  {
    arr[i+1] = arr[i]; 
  }
    arr[index] = element;
    return 1; 
}

int main(){
  int arr[100] = {1, 4, 7, 8};
  int size = 4, element = 6, index = size;
  display(arr, size);
  sortedInsertion(arr, size, 100, element, index); 
  size +=1;
  display(arr, size);
  
return 0;  
}
