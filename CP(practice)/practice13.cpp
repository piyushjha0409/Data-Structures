#include<bits/stdc++.h>
using namespace std;

void sort(int *arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (high >= mid)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[mid], arr[low]);
            mid++;
            low++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            if (arr[high] != 2)
            { // if it is not the 2 then swap
                swap(arr[mid], arr[high]);
                high--;
            }
            else
            { // if it is equals to 2 then untill unless if it doesnt equal to 2 keep decrementing
                while (arr[high] != 2)
                {
                    high--;
                }
                swap(arr[high], arr[mid]);
                high--;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int [n];

    // user input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    sort(arr, n);

 //printing the array 
 for(int i=0; i < n; i++){
     cout<<arr[i]<<" ";
 }

    return 0;
}