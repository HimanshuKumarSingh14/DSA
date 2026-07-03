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
    int sum=0;
    int maxi=-1;
    int start;
    int ansstart;
    int end;
    for(int i=0;i<n;i++)
    {
        if(sum==0)
         start=i;
        sum+=arr[i];
        if(sum>maxi)
        {
            maxi=sum;
            ansstart=start,end=i;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    for(int i=ansstart;i<=end;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}