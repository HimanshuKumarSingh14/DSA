#include<iostream>
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
    int s=-1;
    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            s=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>s)
        {
            s=arr[i];
        }
    }
    cout<<"Second Largest"<<s;
    return 0;
}