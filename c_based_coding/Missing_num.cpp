#include<iostream>
#include<algorithm>
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
    int m_num=0;
    for(int i=0;i<n-1;i++)
    {
        t_sum-=arr[i];
    }
    cout<<t_sum;
    return 0;
}