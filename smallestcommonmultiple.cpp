#include<iostream>
#include<vector>
#include<iomanip>
#include<cstdlib>
using namespace std;
long long euclidgcd(long long small , long long big)
{
    if(small==0)
        return big;
    euclidgcd(big%small , small);
}
int main()
{
 long long small , big , temp;
 cin>>big>>small;
 if(small > big)
 {
   temp = small;
   small = big;
   big = temp;
 }
 temp = euclidgcd(small,big);
 long long result = (small*big) / temp;
  cout<<result;
}
