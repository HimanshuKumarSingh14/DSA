#include<iostream>
#include<vector>
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
    vector<int>answer(n,1);
    int prefix=1;
    for(int i=0;i<n;i++)
    {
        answer[i]=prefix;
        prefix*=arr[i];
    }
    int suffix=1;
    for(int i=n-1;i>=0;i--)
    {
        answer[i]*=suffix;
        suffix*=arr[i];
    }
    cout<<"Dispalying the element in the array after multiplying:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<answer[i]<<" ";
    }
    return 0;
} 