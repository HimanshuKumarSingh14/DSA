#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t_sum=(n*(n+1))/2;
    int arr[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];

    }
    int p_sum=0;
    for(int i=0;i<n-1;i++)
    {
        p_sum+=arr[i];
    }
    cout<<"Missing number "<<t_sum-p_sum;
    return 0;

}