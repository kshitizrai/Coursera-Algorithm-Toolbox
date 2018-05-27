#include<iostream>
#include<iomanip>
#include<vector>
#include<cstdlib>
using namespace std;
int main()
{
    int n , temp;
    cin>>n;
    n=n+1;
    int first = 0 , second = 1;
    vector<int> fibo(n);
    for(int i=2 ; i<n ; i++)
    {
        temp = (first + second)%10;
        fibo[i] = temp;
        first = second;
        second = temp;
    }
    cout<<fibo[n-1];
}
