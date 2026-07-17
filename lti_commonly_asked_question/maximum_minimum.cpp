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
    sort(arr,arr+n);
    cout<<"Minimum "<<arr[0]<<endl;
    cout<<"Maximum "<<arr[n-1];
    return 0;
}