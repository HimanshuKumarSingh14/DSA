#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array:\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            continue;
        }
        else{
            cout<<"Not sorted";
            break;
        }

    }
    if(i==n-1)
    {
        cout<<"Sorted array";
    }
    
    return 0;
}