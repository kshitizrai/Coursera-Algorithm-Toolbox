#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

void mergearray(int coin[] , int start , int mid , int last)
{
    int n1 = mid - start + 1;
    int n2 = last - mid ;
    int part1[n1] , part2[n2];

    for(int i=0 ; i<n1 ; i++)
        part1[i] = coin[start+i];
    for(int i=0 ; i<n2 ; i++)
        part2[i] = coin[i + mid + 1];

    int i=0 , k=start , j=0;

    while(i<n1 && j<n2)
    {
        if(part1[i]>part2[j])
            coin[k++] = part1[i++];
        else
            coin[k++] = part2[j++];
    }
    while(i<n1)
    {
        coin[k++] = part1[i++];
    }
    while(j<n2)
    {
        coin[k++] = part2[i++];
    }

}
void mergesort(int coin[] , int low , int high)
{
    //cout<<"Merge Sort started";
    int mid;
    if(low < high)
    {
        mid = (low+high)/2;

        mergesort(coin , low , mid);
        mergesort(coin , mid+1 , high);

        mergearray(coin , low , mid , high);
    }
}

int main()
{
    int money , coinno;
    cout<<"Money to be changed=";
    cin>>money;
    cout<<"Enter the number denomination of cents available=";
    cin>>coinno;
    cout<<"Enter the value of each denomination=";
    int coin[coinno];
    for(int i=0 ; i<coinno ; i++)
    {
        cin>>coin[i];
    }
    mergesort(coin , 0 , coinno-1);
   // for(int i=0 ; i<coinno ; i++)
   //     cout<<coin[i];
    int i=0;
    cout<<"Selected Coin = \n";
    while(money>0)
    {
        while(coin[i] > money)
            i++;
        cout<<coin[i] <<"\n";
        money = money - coin[i];
    }
}
