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
    int xr=0;
    for(int i=0;i<n-1;i++)
    {
        xr^=arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        xr^=i;
    }
    cout<<"Missing number:"<<xr;
    return 0;
}