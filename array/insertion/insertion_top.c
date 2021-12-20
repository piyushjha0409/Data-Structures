#include<stdio.h>
  
void display(int arr[],int n){
    for(int i = 0; i<n; i++){
        printf("%d",arr[i]);
    }
}  
int insertion(int arr[], int size,int element, int index){
   
    for(int i=size-1; i>=index; i--){
       arr[i+1] = arr[i];
    }
    arr[index] = element;
    size++;

    return 1;
}

int main(){
int arr[100] = {1,2,3,5,6,7};
int size = 6,element = 4, index = 0;

display(arr,size);
insertion(arr,size,element,index);

printf("\nAfter insertion at top\n");
display(arr,size);
return 0;
}