#include<iostream>
#include<vector>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    long long n;
    unsigned long long temp;
   // cout<<"Enter the n element:-";
    cin>>n;
    unsigned long long first = 0 , second = 1 ;
    n=n+1;
    unsigned long long fibo[n];
    fibo[0]=first;
    fibo[1]=second;
    for(int i=2 ; i<n ; i++)
    {
   //     cout<<first<<" "<<second<<"\n";
        temp = first + second;
        fibo[i]=(temp);
        first = second;
        second= temp;;
    }
   // cout<<  "Series=";
  for(int i=0 ; i<n ; i++)
{
    cout<<fibo[i] <<" ";
}

}
