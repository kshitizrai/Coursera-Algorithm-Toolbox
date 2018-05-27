#include<iostream>
#include<vector>
#include<math.h>
#include<limits.h>
using namespace std;

void editdistance(string str1 , string str2 , int m , int n)
{
    int d[m+1][n+1];
    for(int i=0 ; i<=m ; i++)
    {
        for(int j=0 ; j<=n ; j++)
        {
            if(i==0)
                d[i][j] = j;
            else if(j==0)
                    d[i][j] = i;
            else if(str1[i-1] == str2[j-1])
                    d[i][j] = d[i-1][j-1];
            else
                d[i][j] = 1 + min(min(d[i][j-1] , d[i-1][j]) , d[i-1][j-1]);

        }
    }
  cout<<d[m][n];
}
int main()
{
    string str1 , str2 ;
   // cout<<"Enter string 1 = " ;
    cin>>str1;
   // cout<<"Enter string 2 = ";
    cin>>str2;
    editdistance(str1 , str2 , str1.length() , str2.length());
}
