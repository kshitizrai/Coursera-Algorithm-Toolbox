#include<iostream>
#include<limits.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

void primitivecal(int n)
{
    int mininum[n+1] , numcoin1 = 0 , numcoin2 = 0 , numcoin3 = 0 ;
    vector<int> number;
    number.push_back(0);
    mininum[0] = 0;
    int r;
    for(int i=1 ; i<=n ; i++)
    {
        r = 1;
        mininum[i]=INT_MAX;
        numcoin1 = INT_MAX , numcoin2 = INT_MAX , numcoin3 = INT_MAX;
        numcoin1 = mininum[i-1] + 1;
        if(i%2==0)
            numcoin2 = mininum[i/2] + 1;
        if(i%3==0)
            numcoin3 = mininum[i/3] + 1;
       mininum[i] = min(min(numcoin1,numcoin2) , numcoin3);
       //cout<<"\ni="<<i<<" "<<"ans="<<mininum[i];
       if(mininum[i] == numcoin1 && r==1)
       {
           number.push_back(i-1);
           //cout<<" "<<number[i];
           r=0;
       }
       if(mininum[i] == numcoin2 && r==1)
       {
           number.push_back(i/2);
           //cout<<" "<<number[i];
           r=0;
       }
       if(mininum[i] == numcoin3 && r==1)
       {
           number.push_back(i/3);
           r=0;
           //cout<<" "<<number[i];
       }
    }
    cout<<mininum[n]-1<<"\n";
    number[0] = 0;
    if(n == 1)
        cout<<"0";
    vector<int> answer;
    answer.push_back(n);
    while(number[n]!= 0)
    {
        answer.push_back(number[n]);
        n = number[n];
    }
    for(int i=answer.size()-1 ; i>=0 ; i-- )
        cout<<answer[i]<<" ";
}

int main()
{
    int n;
    //cout<<"Enter number=";
    cin>>n;
    primitivecal(n);
}
