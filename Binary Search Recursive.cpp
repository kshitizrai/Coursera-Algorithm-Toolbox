#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void Merge(int *a, int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;

	// Merge the two parts into temp[].
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
		Merge(a, low, high, mid);
	}
}
int binarysearch(int arr[], int low , int high , int key)
{
    if(high<low)
        return(-1);
    int mid = floor((low+high)/2);
    if(key == arr[mid])
    {
        cout<<mid;
        return(mid);
    }
    if(key>arr[mid])
        binarysearch(arr , mid+1 , high ,key);
    else
        binarysearch(arr , low , mid-1 ,key);

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array=";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    MergeSort(arr , 0 , n);
    cout<<"Enter the number to be searched=";
    int key;
    cin>>key;
    int ans = binarysearch(arr , 0 , n , key);
}
