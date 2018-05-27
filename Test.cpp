#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void mergearr(int arr[],int mid , int low , int high)
{
    int size1 = mid - low + 1;
    int size2 = high - mid;
    int arr1[size1] , arr2[size2];
    for(int i=0 ; i<size1 ; i++)
        arr1[i]=arr[low+i];
    for(int i=0 ; i<size2 ; i++)
        arr2[i]=arr[mid+1+i];
    int i=0 , j=0 , k=low;
    while((i<size1)&&(j<size2))
    {
        if(arr1[i]<arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }
    while(i<size1)
    {
        arr[k++] = arr1[i++];
    }
    while(j<size2)
    {
        arr[k++] = arr2[i++];
    }
}
void mergesort(int arr[] , int low , int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        mergesort(arr , low , mid);
        mergesort(arr , mid+1 , high);
        mergearr(arr , mid , low , high);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array=";
    for(int i=0 ; i<n ;i++)
        cin>>arr[i];
    mergesort(arr,0,n-1);
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<" ";
}
