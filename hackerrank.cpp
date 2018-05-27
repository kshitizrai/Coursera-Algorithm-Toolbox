#include<iostream>
#include<vector>
#include<math.h>
#include<cstdlib>
#include<iomanip>
#include<climits>
#include<limits>
#include<limits.h>
#include<string.h>
//#include<process.h>
#include<cstdio>
using namespace std;
int main()
{
 int n;
 cin>>n;
 vector<int> a(n);
 int first , second;
 cin>>a[0];
 cin>>a[1];
 first = 0;
 second= 1;
 for(int i=2 ; i<n ; i++)
 {
     cin>>a[i];
     if(a[i]>a[first])
        first=i;
     if(a[i]>a[second] && i!=first)
        second = i;
 }
 cout<<abs(a[first]-a[second]);
}
