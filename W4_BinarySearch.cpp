#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void binarysearch(int a[] , int high , int low , int key)
{
    if(high<low)
       {
         cout<<"-1 ";
         return;
       }
   // cout<<"Low="<<low<<" High="<<high;
    int mid = floor((low + high)/2);
   //cout<<" Mid="<<mid<<"\n";
    if(a[mid] == key)
      {
         cout<<mid<<" ";
         return;
      }
    if(a[mid]>key)
        binarysearch(a , mid-1 , low , key);
    if(a[mid]<key)
        binarysearch(a , high , mid+1 , key);
}
int main()
{
    int n;
    cin>>n;
    int a[n] ;
    for(int i=0 ; i<n ; i++)
        cin>>a[i];
    int k;
    cin>>k;
    int b[k] , ans[k];
    for(int i=0 ; i<k ; i++)
    {
        cin>>b[i];
    }
    for(int i=0 ; i<k ; i++)
       {
         binarysearch(a,n-1,0,b[i]);
       }
}
