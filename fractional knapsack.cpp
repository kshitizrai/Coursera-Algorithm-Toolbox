#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int w;
    cout<<"Enter the capacity of knapsack=";
    cin>>w;
    cout<<"Enter the number of items you have=";
    int n;
    cin>>n;
    vector<int> unitwei(n);
    vector<int> units(n);
    int amount;
    int number;
    cout<<"Enter sorted data as per weight per unit"<<"\n";
    for(int i=0 ; i<n ; i++)
    {
     cin>>amount;
     cin>>number;
     unitwei[i]=(amount/number);
     units[i]  = number;
    }
    int ans=0;
    int y;
    int i=0;
    while(w>0)
    {
        y = min(w,units[i]);
        ans = ans + unitwei[i]*y;
        w = w - y;
        i++;
    }
    cout<<ans;
}
