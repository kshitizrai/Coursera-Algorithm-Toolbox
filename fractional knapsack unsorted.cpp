#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int maxi(double perunit[] , int n)
{
    int index = 0;
    for(int i=0 ; i<n ; i++)
    {
        if(perunit[i]>perunit[index])
            index = i;
     //   cout<<index;
    }
    return(index);
}
int main()
{
  int n;
  cin>>n;
  int w;
  cin>>w;
  double perunit[n];
  int weight[n];
  double value;
  int weights;
  int totalweight = 0;
  for(int i=0 ; i<n ; i++)
  {
      cin>>value;
      cin>>weights;
      perunit[i] = value/float(weights);
      weight[i]  = weights;
      totalweight = totalweight + weights;
  }
  int maxin = -1;
  int i = 0;
  int a = 0;
  double amount = 0;
  while(w>0&&totalweight>0)
  {
      maxin = maxi(perunit , n-i);
      a = min(w,weight[maxin]);
      w = w-a;
      totalweight = totalweight - a;
      amount = amount + (float(a)*perunit[maxin]);
      for(int j=maxin ; j<n-1-i ; j++)
       {
         perunit[j] = perunit[j+1];
         weight[j] = weight[j+1];
       }
      i++;
      //cout<<amount;
  }
  cout<<std::setprecision(9);
  cout<<amount;
}
