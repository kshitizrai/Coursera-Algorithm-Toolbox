#include<iostream>
#include<vector>>
using namespace std;
int main()
{
    int n;
   // cout<<"Enter the money=";
    cin>>n;
    int amount = 0;
    int number = 0;
    while(amount+10<=n)
    {
        amount = amount + 10;
        number++;
    }
    while(amount+5<=n)
    {
        amount = amount + 5;
        number++;
    }
    while(amount+1<=n)
    {
        amount = amount + 1;
        number++;
    }
    cout<<number;
}
