#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int high = i;
    int a = 2 * i + 1;
    int b = 2 * i + 2;

    if(a < n && arr[a] > arr[high])
    {
        high = a;
    }

    if(b < n && arr[b] > arr[high])
    {
        high = b;
    }

    if(high != i)
    {
        swap(arr[i], arr[high]);
        heapify(arr, n, high);
    }
}

void heapSort(int arr[], int n)
{
    for(int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for(int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void displayArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    cout<<endl;
    int arr[n];
    cout << "Enter Array Value: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<endl;
    heapSort(arr, n);

    cout<<"Sorted Array is: ";

    displayArray(arr, n);
    cout<<endl;

    return 0;
}
