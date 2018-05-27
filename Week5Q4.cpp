#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<limits>
using namespace std;

void LCS(char a[] , char b[] , int n , int m)
{

}

int main()
{
    int n , m;
    cin>>n;
    char str1[n];
    for(int i=0 ; i<n ; i++)
        cin>>str1[i];
    cin>>m;
    char str2[m];
    for(int i=0 ; i<m ; i++)
        cin>>str2[i];
    int count = 0;
    // LCS Largest Common Sequence
    LCS(str1 , str2 , n , m);
}
