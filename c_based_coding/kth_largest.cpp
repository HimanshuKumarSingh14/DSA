#include<iostream>
#include<vector>
#include<queue>
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
    int k;
    cin>>k;
    priority_queue<int,vector<int>,greater<int>>minheap;
    for(int i:arr)
    {
        minheap.push(i);
        if(minheap.size()>k)
        minheap.pop();
    }
    cout<<"Kth largest element"<<" "<<minheap.top();
    return 0;

}