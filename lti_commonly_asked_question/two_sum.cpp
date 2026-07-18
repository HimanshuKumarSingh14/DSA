#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int complement=target-arr[i];
        if(mp.find(complement)!=mp.end())
        {
            cout<<mp[complement]<<" "<<i;
        }
        mp[arr[i]]=i;
    }
    return 0;
}