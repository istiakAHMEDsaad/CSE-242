#include<iostream>
using namespace std;
void Merge(int arr[],int p, int q, int r);
void mergeSort(int arr[],int p,int r)
{
    if(p<r)
    {
        int q = (p+r)/2;
        mergeSort(arr,p,q);
        mergeSort(arr,q+1,r);
        Merge(arr,p,q,r);
    }
 
}
void Merge(int arr[],int p, int q, int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1],R[n2+1];
 
    for(int i=0; i<n1; i++)
    {
        L[i]= arr[p+i];
    }
    for(int j=0; j<n2; j++)
    {
        R[j]= arr[q+j+1];
    }
 
    int i=0,j=0,k=p;
    L[n1]=1000;
    R[n2]=1000;
 
 
    for(int k=p; k<=r; k++)
    {
            if(L[i]<=R[j])
            {
                arr[k]=L[i];
                i++;
            }
            else
            {
                arr[k]=R[j];
                j++;
            }
    }
 
}
 
int main()
{
    int arr[]= {10,40,100,30,50};
    int size = sizeof(arr)/sizeof(arr[0]);
 
    mergeSort(arr,0,size-1);
 
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
 
    return 0;
}