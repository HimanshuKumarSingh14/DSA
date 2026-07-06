#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n1;
    cin>>n1;
    int arr1[n1];
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    for(int j=0;j<n2;j++)
    {
        cin>>arr2[j];
    }
    int left=n1-1;
    int right=0;
    while (left>=0 && right<n2)
    {
        if(arr1[left]>arr2[right])
        {
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    for(int i=0;i<n1;i++)
    {
        cout<<arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cout<<arr2[i];
    }
    return 0;
}