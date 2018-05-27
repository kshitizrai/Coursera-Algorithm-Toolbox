#include<iostream>
#include<vector>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long temp , first = 0 , second = 1 ;
    int sum = 0;
    vector<int> fibomod;
    fibomod.push_back(first);
    fibomod.push_back(second);
    int i = 2;
    bool flag = true;
    while(fibomod[i-2]!=0 || fibomod[i-1]!=1 || flag==true)
    {
        flag = false;
        temp = first + second ;
        fibomod.push_back(temp%10);
        first = second;
        second = temp;
        i++;
    }
    n = n%60;
    m = m%60;
    for(int i=n ; i<=m ; i++)
    {
        sum = sum + fibomod[i];
    }
    cout<<sum%10;
}
