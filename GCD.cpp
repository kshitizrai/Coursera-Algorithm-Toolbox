#include<iostream>
#include<vector>
#include<cstdlib>
#include<iomanip>
using namespace std;
long long gcdrecursive(long long a , long long b)
{
 return(0);
}
long long euclidgcd(long long a , long long b)
{
  long long temp;
  if(b==0)
    return(a);
  if(b>a)
  {
      temp = b;
      b = a  ;
      a = temp;
  }
  euclidgcd(b , a%b);
}
int main()
{
    long long a , b;
//    cout<<"Enter the numbers(>0):-";
    cin>>a>>b;
    //long long result1 = gcdrecursive(a,b);
    long long result2 = euclidgcd(a,b);
    cout<<result2;
}
