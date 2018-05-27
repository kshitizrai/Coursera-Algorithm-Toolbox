#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void Merge(int A[],int p, int q,int r)     /*It merges two arrays */
{

	int n1=q-p+1,i,j,k;       /*n1 is the size of L[]*/

	int n2=r-q;               /*n2 is the sixe of R[]*/

	int L[n1],R[n2];

	for(i=0;i<n1;i++)

	{
		L[i]=A[p+i];
	}

	for(j=0;j<n2;j++)
	{
		R[j]=A[q+j+1];
	}

	i=0,j=0;

	for(k=p;i<n1&&j<n2;k++)
	{
		if(L[i]<R[j])
		{
			A[k]=L[i++];
		}
		else
		{
			A[k]=R[j++];
		}
	}

	while(i<n1)             /*If L[] has more elements than R[] then it will put all the reamining elements of L[] into A[]*/
	{
		A[k++]=L[i++];
	}

	while(j<n2)             /*If R[] has more elements than L[] then it will put all the reamining elements of R[] into A[]*/
	{
		A[k++]=R[j++];
	}
}

void MergeSort(int A[],int p,int r)    /*It will will divide the array and sort them while merging them*/
{
	int q;

	if(p<r)
	{
		q=(p+r)/2;                      /*q is the middle element to divide the array*/
		MergeSort(A,p,q);
		MergeSort(A,q+1,r);
		Merge(A,p,q,r);
	}

}
int binarysearch(int arr[] , int low , int high , int key)
{
    //cout<<"Inside Binary\n";
    int mid = ceil((low + high)/2.0);
    //cout<<"mid="<<mid;
   // for(int i=0 ; i<=high ; i++)
   //     cout<<arr[i]<<" ";
    if((mid==0 || arr[mid-1]<key)&&(arr[mid]==key))
        return(mid);
    if(arr[mid]<key)
        binarysearch(arr,mid+1,high,key);
    else
        binarysearch(arr,0,mid-1,key);
  //  cout<<"Outside Binary\n";
}
bool majoritycheck(int arr[] , int n)
{
  //cout<<"Inside Majority\n";
 // for(int i=0 ; i<n ; i++)
 //       cout<<arr[i]<<" ";
  int middle    = floor(n/2.0);
  int key       = arr[middle];
 // cout<<"Middle"<<middle<<" Value="<<key;
  int pos       = binarysearch(arr,0,n-1,key);
 // cout<<"Position="<<pos<<"\n";
 // cout<<"Value="<<arr[pos+middle]<<"\n";
  if((pos+int(n/2))<=(n-1)&&(pos!=-1)&&(arr[pos+int(n/2)] == key))
    return(true);

  else
    return(false);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++)
        cin>>arr[i];
    MergeSort(arr,0,n-1);
    if(majoritycheck(arr,n))
        cout<<"1";
    else
        cout<<"0";
   // for(int i=0 ; i<n ; i++)
   //     cout<<arr[i]<<" ";
}

