#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int flag = 0;
        for(int j=0; j<size-i-1; j++){
           if(arr[j] > arr[j+1]){
               swap(arr[j], arr[j+1]);
               flag = 1;
           }
        }
        if(flag == 0){
            return;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];  //dynamic memory allocation

    //taking the user input
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        arr[i] = element;
    }

    //printing the array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //function
    bubbleSort(arr, n);

    //printing the array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

 delete [] arr; //deletion of the array
 return 0;
}