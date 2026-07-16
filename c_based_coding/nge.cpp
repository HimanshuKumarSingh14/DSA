#include<iostream>
#include<vector>
#include<stack>
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
    vector<int>nge(n,-1);
    stack<int>st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && st.top()<=arr[i])
        st.pop();
        if(!st.empty())
        nge[i]=st.top();
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<nge[i]<<" ";
    }
    return 0;
}