#include<bits/stdc++.h>
using namespace std;
 
//we will do heap sort algorithm here

void heapify(int arr[], int size, int i){

int largest = i;

//left node
int l = (2 * i) + 1;

// right node
int r = (2 * i) + 2;

if(l < size && arr[l]> arr[largest]){
    largest = l;
}
if(r < size && arr[r] > arr[largest]){
    largest = r;
}

//if largest is not the root 
if(largest != 1){
    swap(arr[i], arr[largest]);

    //recursion heapify effect
    heapify(arr, N, largest);
  }
}

//function for building the heap sort alogrithm
void buildheap(int arr[], int size){

}

void sort(int arr[], int size){


}

int main()
{
    return 0;
}