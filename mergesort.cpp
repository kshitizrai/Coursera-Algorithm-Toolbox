#include<iostream>
#include<vector>
#include<cstdlib>
#include<math.h>
using namespace std;
void mergearray(int arr[] , int start , int mid , int last)
{
    int n1 = mid - start + 1;
    int n2 = last - mid;
    int part1[n1] , part2[n2];

    for(int i=0 ; i<n1 ; i++)
        part1[i] = arr[start+i];
    for(int i=0 ; i<n2 ; i++)
        part2[i] = arr[i + mid + 1];

    int i=0 , k=start , j=0;

    while(i<n1 && j<n2)
    {
        if(part1[i] > part2[j])
            arr[k++] = part2[j++];
        else
            arr[k++] = part1[i++];
    }

    while(i<n1)
        arr[k++] = part1[i++];
    while(j<n2)
        arr[k++] = part2[j++];
}
void mergesort(int arr[] , int start , int last)
{
    int mid;
    if(last>start)
    {
        mid = (last + start)/2;

        mergesort(arr , start , mid);
        mergesort(arr , mid+1 , last);

        mergearray(arr , start , mid , last);
    }
}
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0 ; i<n ; i++)
        cin>>arr[i];

    cout<<"Unsorted array = ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    mergesort(arr,0,n-1);

    cout<<"1\nSorted array = ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
