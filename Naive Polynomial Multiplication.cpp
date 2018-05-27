#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the degree of polynomial=";
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> product(2*n - 1);
    for(int i=0 ; i<n ; i++)
        cin>>a[i];
    for(int i=0 ; i<n ; i++)
        cin>>b[i];
    for(int i=0 ; i<n ; i++)
    {  for(int j=0 ; j<n ; j++)
       {
           product[i+j] = product[i+j] + a[i]*b[j];
       }
    }
    for(int i=0 ; i<(2*n-1) ; i++)
        cout<<product[i]<<" ";
}
