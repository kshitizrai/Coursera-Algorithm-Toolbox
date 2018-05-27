#include<iostream>
#include<math.h>
#include<vector>
#include<limits.h>
using namespace std;

int n=3;

int DPcoinChange(int money , int coin[])
{
    int minnumcoins[money+1] , numcoin;
    minnumcoins[0] = 0;
    for(int m=1 ; m<=money ; m++)
    {
        minnumcoins[m] = INT_MAX;
        for(int i=0 ; i<n ; i++)
        {
            if(m>=coin[i])
            {
                numcoin = minnumcoins[m-coin[i]] + 1;
                if(numcoin<minnumcoins[m])
                    minnumcoins[m] = numcoin;
            }
        }
        if(minnumcoins[m]==INT_MAX)
            minnumcoins[m]=0;
    }
    return(minnumcoins[money]);
}

int main()
{
    int money ;
    //cout<<"Enter money to be changed=";
    cin>>money;
    //cout<<"Enter different denomination of coins available=";
    //cin>>n;
    int coins[3] = {1 , 3 , 4};
   // for(int i=0 ; i<n ; i++)
   //     cin>>coins[i];
    int ans = DPcoinChange(money , coins);
    cout<<ans;
}
