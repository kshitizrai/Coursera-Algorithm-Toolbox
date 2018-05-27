#include<iostream>
#include<vector>
#include<math.h>
#include<cstdlib>
using namespace std;
int finalpos(int arr[] , int low , int high)
{
    //cout<<"Partition=\n";
    int x = arr[low];
    int j=low;
    int temp;
    for(int i=j+1 ; i<=high ; i++)
    {
        if(arr[i]<=arr[j])
        {
            j=j+1;
            temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return(j);
}
int flag=1;
void quicksort(int arr[] , int low , int high)
{
    //cout<<"Quicksort=\n";
    if(low>high)
        return;
      //  if(flag==1)
    {
    int x = rand()%(high-low+1)+low;
    cout<<"x="<<x<<" ";
    int temp = arr[x];
    arr[x]   = arr[low];
    arr[low] = temp;
    //flag=0;
    }
    int m=finalpos(arr , low , high);
    quicksort(arr , 0   , m-1);
    quicksort(arr , m+1 , high);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array:-";
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    quicksort(arr,0,n-1);
    cout<<"Sorted array=\n";
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<" ";
}
