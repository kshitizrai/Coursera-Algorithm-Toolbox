#include<iostream>
#include<vector>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
  long long n;
  cin>>n;
  n = n+1;
  vector<int> fibomod;
  long long first=0 , second=1 ,temp;
  fibomod.push_back(first);
  fibomod.push_back(second);
  int i = 2;
  bool flag = true;
  while(fibomod[i-2]!=0 || fibomod[i-1]!=1 || flag==true)
  {
      flag = false ;
      temp = first + second;
      fibomod.push_back(temp%10);
      first = second;
      second = temp;
      i++;
  }
  int x = n%60;
  int sum = 0;
  for(int i=0 ; i < x ; i++)
  {
      sum = sum + fibomod[i];
  }
  cout<<sum%10;
}
