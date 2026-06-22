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
    int target;
    cin>>target;
    int i=0;
    int j=n-1;
    while(j>=i)
    {
        if(target==(arr[i]+arr[j]))
        {
            cout<<arr[i]<<" "<<arr[j];
            break;
        }
        else if((arr[i]+arr[j])>target)
        {
            j--;
        }
        else i++;
    }
    return 0;
}