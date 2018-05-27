#include<iostream>
#include<vector>
using namespace std;
void sorting(int segment[][2] , int n)
{
    int temp0 , temp1;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i ; j<n ;j++)
        {
            if(segment[i][0]>segment[j][0])
            {
                temp0 = segment[j][0];
                temp1 = segment[j][1];
                segment[j][0] = segment[i][0];
                segment[j][1] = segment[i][1];
                segment[i][0] = temp0 ;
                segment[i][1] = temp1 ;
            }
        }
    }
   // for(int i=0 ; i<m ; i++)
   //     cout<<endpoint[m];
}
void solve(int segment[][2] , int endpoint[] , int n)
{
  int start = 0 , end = 0 , m = 0;
  for(int i=0 ; i<n ; i++)
  {
      start = segment[i][0];
      end   = segment[i][1];
      for(int j=i+1 ; j<n ; j++)
      {
          if(segment[j][0]<=end)
          {
           start = segment[j][0];
              if(segment[j][1]<end)
                end = segment[j][1];
                i++;
          }
          else
            break;
      }
      endpoint[m] = start;
      m++;
  }
  cout<<m<<"\n";
      for(int i=0 ; i<m ; i++)
        cout<<endpoint[i]<<" ";
}

int main()
{
    int n;
    cin>>n;
    int segment[n][2];
    int endpoint[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>segment[i][0];
        cin>>segment[i][1];
    }
    sorting(segment , n);
    solve(segment , endpoint ,n);
}
