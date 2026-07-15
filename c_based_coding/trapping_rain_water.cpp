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
    int left=0;
    int right=n-1;
    int maxWater=0;
    while(left<right)
    {
        int area=min(arr[left],arr[right])*(right-left);
        maxWater=max(area,maxWater);
        if(arr[left]<arr[right])
        {
            left++;
        }
        else{
            right--;
        }
    }
    cout<<maxWater;
    return 0;
}