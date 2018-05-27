#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
bool doswap(int a , int b)
{
   int a_digits = 0;
   int b_digits = 0;
   int new_a = a , a1=a;
   int new_b = b , b1=b ;
    while(a!=0)
    {
        a = a/10;
        a_digits++;
    }
    while(b!=0)
    {
        b = b/10;
        b_digits++;
    }
    for(int i=0 ; i<a_digits ; i++)
    {
        new_b = new_b*10;
    }
    for(int i=0 ; i<b_digits ; i++)
    {
        new_a = new_a*10;
    }
    new_b = a1 + new_b;
    new_a = b1 + new_a;
    //cout<<"anew="<<new_a<<"bnew="<<new_b<<"\n";
    if(new_a<new_b)
        return(true);
    else
        return(false);
}
int solve(int arr[] , int n)
{
    int a , b , temp;
 for(int i=0 ; i<n ; i++)
 { for(int j=i+1 ; j<n ; j++ )
 {    a = arr[i];
      b = arr[j];
      //cout<<"Big Initial="<<" "<<arr[i]<<" "<<"Small Initial="<<arr[j]<<"\n";
   if(doswap(a,b))
    {
     temp = arr[i];
     arr[i] = arr[j];
     arr[j] = temp;
     //cout<<"Bigger="<<arr[i]<<" "<<"Smaller="<<arr[j]<<"\n";
    }
 }
 }
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    solve(arr,n);
    for(int i=0 ; i<n ;i++)
        cout<<arr[i];
}
