#include<iostream>
#include<vector>
using namespace std;
int linsearch(int arr[] , int low , int high ,int key)
{
    if(high<low)
     {
        cout<<"Not Found:";
        return(0);
     }
    if(arr[low]==key)
    {
        return(low);
        cout<<low;
    }
    linsearch(arr , low+1 , high , key);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    cout<<"Enter the numbrt you want to search=";
    int key;
    cin>>key;
    int x=linsearch(arr , 0 , n-1 , key);
    cout<<"Result="<<x;
}
