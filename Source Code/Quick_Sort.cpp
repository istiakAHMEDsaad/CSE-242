//(28-1-24) Quick Sort Algorithm
#include<iostream>
using namespace std;
int Partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i=low;
    int j=high;
    int temp;
    while(i<j)
    {
        do
        {
            i++;
        }
        while(pivot>=arr[i]);
        do
        {
            j--;
        }
        while(pivot<arr[j]);
        if(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    arr[low]=arr[j];
    arr[j]=pivot;

    return j;
}

void quickSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int pivot=Partition(arr, low, high);
        quickSort(arr, low, pivot);
        quickSort(arr, pivot+1, high);
    }
}

int main()
{
    int arr[]={1,5,1,3,7,4,6,2,8,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Orginal Arra: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    quickSort(arr,0, size);
    cout<<endl<<"Sorted Array: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
