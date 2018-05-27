#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int maxin(vector<long> a , int n)
{
  int maxi = 0;
  for(int i=0 ; i<n ; i++)
  {
      if(a[i] > a[maxi])
        maxi = i;
  }
  return(maxi);
}
int main()
{
    int n;
    cin>>n;
    vector<long> a(n);
    vector<long> b(n);
    for(int i=0 ; i<n ; i++)
        cin>>a[i];
    for(int i=0 ; i<n ; i++)
        cin>>b[i];
    int term1;
    int term2;
    long long amount = 0;
    for(int i=0 ; i<n ; i++)
    {
        term1 = maxin(a , n-i);
        //cout<<a[term1]<<" ";
        term2 = maxin(b , n-i);
        //cout<<b[term2]<<" ";
        amount = amount + a[term1]*b[term2];
        for(int j=term2 ; j<n-i-1 ; j++)
            b[j] = b[j+1];
        for(int j=term1 ; j<n-i-1 ; j++)
            a[j] = a[j+1];
    }
    cout<<amount;
}
