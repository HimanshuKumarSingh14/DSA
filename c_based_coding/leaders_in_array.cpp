#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        arr.push_back(j);
    }
    vector<int>ans;
    int max=arr[arr.size()-1];
    ans.push_back(max);
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
            ans.push_back(arr[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    for(int j:ans)
    {
        cout<<j<<" ";
    }
    return 0;
}