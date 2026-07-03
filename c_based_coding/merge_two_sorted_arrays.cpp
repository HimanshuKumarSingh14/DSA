#include<iostream>
#include<algorithm>
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
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    int l=0;
    int r=0;
    int narr[n+n1];
    int i=0;
    while(l<=n-1 && r<=n1-1)
    {
        if(arr[l]<arr1[r])
        {
            narr[i]=arr[l];
            i++;
            l++;

        }
        else if(arr[l]>arr1[r])
        {
            narr[i]=arr1[r];
            i++;
            r++;
        }
        else{
            narr[i]=arr[l];
            l++;
            r++;
            i++;
        }
    }
    while(l<n)
    {
        narr[i++]=arr[l++];
    }
    while(r<n1)
    {
        narr[i++]=arr1[r++];
    }
    cout<<"Printing new merged array:"<<endl;
    for(int i=0;i<(n+n1);i++)
    {
        cout<<narr[i]<<" ";
    }

    return 0;
}