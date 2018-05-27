#include<iostream>
using namespace std;
void insertionascend(int arr[] , int n)
{
    int j, temp , key;
    for(int i=1 ; i<n ; i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            temp   = arr[j+1];
            arr[j+1] = arr[j];
            arr[j]   = temp;
            j=j-1;
        }
    }
}
void insertiondescend(int arr[] , int n)
{
    int j , temp , key;
    for(int i=1 ; i<n ; i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]<key)
        {
            temp   = arr[j+1];
            arr[j+1] = arr[j];
            arr[j]   = temp;
            j=j-1;
        }
    }
}
void printarray(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int n , arr[100] ;
    char option;
    cout<<"Number of numbers to be sorted=";
    cin>>n;
    cout<<"Enter Numbers="<<"\n";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
        //cout<<"\n";
    }
    label:
    cout<<"Which way you wanna sort \n";
    cout<<"  1. Enter 1 for ascending \n";
    cout<<"  2. Enter 2 for descending \n";
    cin>>option;
    switch(option)
        {
            case '1' : insertionascend(arr,n);
                     printarray(arr,n);
                     break;
            case '2' : insertiondescend(arr,n);
                     printarray(arr,n);
                     break;
            default: cout<<"Sorry Wrong Entry \n \n";
                     goto label;
        }
}
