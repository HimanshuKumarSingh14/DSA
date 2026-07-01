#include<iostream>
#include<vector>
using namespace std;
vector<int> max_num(vector<int>&arr, int k)
{
    int n=arr.size();
    vector<int>ans;
    for(int i=0;i<=n-k;i++)
    {
        int maxn=arr[i];
        for(int j=i;j<i+k;j++)
        {
            maxn=max(maxn,arr[j]);
        }
        ans.push_back(maxn);
    }
    return ans;
}
int main()
{
   vector<int>arr;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    arr.push_back(x);
   } 
   for(int x : max_num(arr,3))
   {
    cout<<x<<endl;
   }

}
