#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void lengthequal(vector<int> & a , vector<int> & b , int size1 , int size2)
{
    if(size1>size2)
    {
        for(int i=0 ; i<(size1-size2) ;i++)
        {
            b.push_back(0);
        }
    }
    if(size1<size2)
    {
        for(int i=0 ; i<(size2-size1) ;i++)
        {
            a.push_back(0);
        }
    }
}
vector<int> makeconver(long long a)
{
    vector<int> x;
    while(a != 0)
    {
        int l = a % 10;
        a = a/10;
        x.push_back(l);   // Data stored in reverse manner
    }
    return(x);
}
int getlength(long long a)
{

}
long long multiply(long long a  ,  long long b)
{
    int alength = getlength(a);
    int blength = getlength(b);


}
using namespace std;
int main()
{
   long long num1 , num2;
   cin>>num1>>num2;
   long long ans = multiply(num1 , num2);                   // Numbers to be multiplies
  // vector<int> a = makeconver(num1);    // Conversion to vector for manipulation
  // vector<int> b = makeconver(num2);
  /* for(int i=0 ; i<a.size() ; i++)
        cout<<a[i];
   for(int i=0 ; i<b.size() ; i++)
        cout<<b[i]; */
  //  lengthequal(a,b,a.size(),b.size());
  //  long long ans = multiply(a , b , a.size() , 0 , 0);
}
