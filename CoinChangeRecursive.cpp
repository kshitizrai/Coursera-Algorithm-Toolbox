#include<iostream>
#include<vector>
#include<math.h>
#include<limits.h>
using namespace std;

int n; // Global Variable
int numcoins=0;
int recursivechange(int money , int coins[] )
{
    //cout<<"Inside recursion="<<money<<" ";
    if(money<=0)
        return(0);
    int minumcoins = INT_MAX;
    for(int i=0 ; i<n ; i++)
    {
        if(money>=coins[i])
            {
                numcoins = recursivechange(money - coins[i] , coins);
             //   cout<<"Numcoins="<<numcoins<<" ";
            }
       // cout<<"Minnumcoins Initial="<<minumcoins<<" ";
        if((numcoins+1) < minumcoins)
            {
              // cout<<"Numcoins loop="<<numcoins<<" ";
               minumcoins = (numcoins + 1);
              // cout<<"Inside loop="<<minumcoins<<" ";
            }
        //cout<<"Minnumcoins="<<minumcoins<<"\n";
    }
    return(minumcoins);
}
int main()
{
    int money;
    cout<<"Money to be changed=";
    cin>>money;
    cout<<"How many denomination is available=";
    cin>>n;
    cout<<"Enter denomination of coins available=";
    int coins[n];
    for(int i=0 ; i<n ; i++)
        cin>>coins[i];
    // No need of sorting as all the cases under recursion
    int ans = recursivechange(money , coins);
    cout<<"Minimum number of coins required = " << ans;
}
