#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mini=arr[0];
    int p=0;
    int cost;
    for(int i=1;i<n;i++)
    {
        cost=arr[i]-mini;
        p=max(p,cost);
        mini=min(mini,arr[i]);
    }
    cout<<p;
    return 0;
}