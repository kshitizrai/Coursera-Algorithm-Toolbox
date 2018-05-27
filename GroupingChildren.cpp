#include<iostream>
#include<vector>
using namespace std;
int groups(vector<float> ages , int n)
{
    int current = 0;
    int count1  = 0;
    int last;
    while(current<n)
    {
        last = current;
        current = current + 1;
        while(current<n && ages[current]-ages[last]<=1)
            current=current+1;
        count1++;
    }
    return(count1);
}
int main()
{
    cout<<"Enter the number of students:-";
    int n;
    cin>>n;
    vector<float> ages(n);
    for(int i=0 ; i<n ; i++)
    {
        //cout<<"I"<<i;
        cin>>ages[i];
        //cout<<"\n";
    }
    int x = groups(ages , n);
    cout<<x;
}
