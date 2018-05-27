#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
long long maxpair(vector<int> b)
{
  long long result ;
  int n = b.size();
  int max1 = -1;
  int max2 = -1;
  int index = 0;
  for(int i=0 ; i<n ; i++)
 {
     if(b[i]>max1)
     {
         max2 = max1;
         max1 = b[i] ;
         index = i ;
     }
     else if(max2 < b[i] && i != index)
     {
         max2 = b[i];
     }
 }
  result = double(max1)*max2;
  return(result);

}
int main()
{
    int n;
    cin>>n;
    vector<int> numbers(n);
    for(int i=0 ; i<n ; i++)
    {
      cin>>numbers[i];
      // if(i==(n-1))
      // std::cout<<std::flush;
    }
   long long maxpairn = maxpair(numbers);
   //std::cout << std::fixed <<std::setprecision(0);
   cout<<maxpairn;
}
