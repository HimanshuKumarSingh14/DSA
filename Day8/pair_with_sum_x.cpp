#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int left=0;
    int right=n-1;
    while(left<right)
    {
        int sum=arr[left]+arr[right];
        if(sum==x)
        {
            cout<<"true";
            return 0;
        }
        else if(sum<x)
        {
            left++;
        }
        else
        right--;
    }
    cout<<"False";
    return 0;

}