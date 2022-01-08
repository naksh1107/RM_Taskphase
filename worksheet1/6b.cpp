#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    int min_idx;
    for (int i = 0; i < n-1; i++)
    {
        
        min_idx = i;
        for (int j = i+1; j < n; j++){
        if (arr[j] < arr[min_idx]){
            min_idx = j;
        }
        }
 
        
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i <n-1; ++i) {
        for (int j = 0; j <n - i-1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
    
            }

        }
    }
    for(int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        return binarySearch(arr, mid + 1, r, x);
    }
 
    return -1;
}
int main(){
    int l;
    cout<<"Enter the number of elements";
    cin>>l;
    int str[l];
    cout<<"enter each element";
    for(int x = 0; x<l;x++)
    {
        cin>>str[x];
    }
    char c;
    cout<<"Enter your choice , 's' for selection sort and 'b' for bubble sort ";
    cin>>c;
    switch(c){
        case 's':
        selectionSort(str,l);
        break;

        case 'b':
        BubbleSort(str,l);
        break;
    }
    int x;
    cout<<"Enter number to be found";
    cin>>x;
    int result = binarySearch(str, 0, l - 1, x);
    if(result == -1){
        cout << "Element is not present in array";
    }
    else{
        cout << "Element is present at index " << result;
    }
}