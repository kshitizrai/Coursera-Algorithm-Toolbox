#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=0 ;
    int j=0 ;
    int count = 0;
    cin>>n;
    vector<int> x;
    int flag = 1;
    while(n>0)
    {
      if(n==2)
      {
          count++;
          n = n-2;
          x.push_back(2);
          break;
          //x.push_back(1);
      }
      if((n>=1 && flag==1)|| n==1)
      {
          flag = 0;
          x.push_back(1);
          count++;
          n = n - 1;
          continue;
      }
      for(j = x[count-1]+1 ; j<n ; j++)
      {
       if((2*j + 1 - n) <= 0)
       {
          break;
       }
      }
      count++;
      x.push_back(j);
      n = n - j;
      //cout<<count<<" "<<j<<"\n";
      /*j = j+1 ;
      if((2*j+1 - n) < 0)
      {
          x.push_back(j);
          count++;
          n= n-j;
      }
      if((2*j+1 - n) > 0)
      {
          x.push_back(j);
          count++;
          n = n - j;
      }
      if((2*j+1 - n) == 0)
      {
          x.push_back(j);
          x.push_back(j+1);
          count = count + 2;
          n=0;
          break;
      }
    }*/
}
    cout<<count<<"\n";
    for(int i=0 ; i<x.size() ; i++)
    {
        cout<<x[i]<<" ";
    }
}
