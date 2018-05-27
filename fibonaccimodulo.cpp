#include<iostream>
#include<vector>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
  long long n;
  int m , newmod;
  cin>>n;
  cin>>m;
  int first = 0 , second = 1;
  vector<int> fibomod;
  fibomod.push_back(first);
  fibomod.push_back(second);
  int i = 2;
  bool flag = true;
  while(fibomod[i-1]!=1 || fibomod[i-2]!=0 || flag == true)
  {
      flag = false;
      newmod = (first + second)%m;
      //cout<<newmod;
      fibomod.push_back(newmod);
      first = second;
      second = newmod;
      i++;
  }
  long long k = n%(i-2);
  cout<<fibomod[k];
}

