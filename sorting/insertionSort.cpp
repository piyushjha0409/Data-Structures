#include<bits/stdc++.h>
using namespace std;
 
void insertionSort(int arr[], int n){

    int start = 0;
    int next = 1;

    for(int i=0; i<n; i++){
        if(arr[start] > arr[next]){
            swap(arr[start], arr[next]);
            start++;
            next++;
        }
        start++;
        next++;
    }
}
int main()
{
    return 0;
}