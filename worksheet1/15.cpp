#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    if (n == 1)
        return;
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
        {
            int temp = arr[i];
            arr[i] = arr[i+ 1];
            arr[i + 1] = temp;
        }
    bubbleSort(arr, n-1);
}
 
void printArray(int arr[], int n)
{
    for (int i=0; i < n; i++)
        cout<<arr[i]<<" ";
    
}
int main()
{
    int n;
    cout<<"enter number of elements";
    cin>>n;
    int arr[n];
    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    bubbleSort(arr, n);
    cout<<"Sorted array : \n";
    printArray(arr, n);
    return 0;
}