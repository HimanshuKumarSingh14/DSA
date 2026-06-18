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
    for(int i=0;i<n-2;i++)
    {
        int left=i+1;
        int right=n-1;
        while(left<right)
        {
            int sum=arr[i]+arr[left]+arr[right];
            if(sum==x)
            {
                cout<<"true";
                return 0;
      
            }
            else if(sum<x)
            {
                left++;
            }
            else{
                right--;
            }
        }
    }
    cout<<"false";
    return 0;
}