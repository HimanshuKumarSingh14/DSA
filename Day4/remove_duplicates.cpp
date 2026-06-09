#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    //printing array after removing the elements
    for(int j=0;j<=i;j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}