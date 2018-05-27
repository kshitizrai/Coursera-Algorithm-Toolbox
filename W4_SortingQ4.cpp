#include<iostream>
#include<math.h>
#include<vector>
#include<cstdlib>

using namespace std;

int mergearr(int arr[] , int low , int mid , int high)
{
    int inv_count = 0;
    int n1 = mid - low + 1;
    int n2 = high - mid ;

    int L[n1] , R[n2];

    for(int i=0 ; i<n1 ; i++)
        L[i] = arr[low + i];
    for(int i=0 ; i<n2 ; i++)
        R[i] = arr[mid + 1 + i];

    int i=0 , j=0 , k=low;

    while(i<n1 && j<n2)
    {
        if(L[i] > R[j])
          {
             arr[k++] = R[j++];
             inv_count = inv_count + mid - i + 1;
          }
        else
            arr[k++] = L[i++];
    }

    while(i<n1)
        arr[k++] = L[i++];
    while(j<n2)
        arr[k++] = R[j++];

    return(inv_count);
}

int mergesort(int arr[] , int low , int high)
{
    int mid , inv_count = 0;

    if(low<high)
    {
        mid = (low+high)/2;
        inv_count=mergesort(arr , low , mid);
        inv_count+= mergesort(arr , mid+1 , high);
        inv_count = inv_count + mergearr(arr , low , mid , high);
    }

    return(inv_count);
}
int main()
{
    int n;

    cin>>n;

    int arr[n];

    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    int x = 0 ;
    x = mergesort(arr , 0 , n-1);

    cout<<x<<"\n";

  //  for(int i=0 ; i<n ; i++)
  //      cout<<arr[i]<<" ";
}
