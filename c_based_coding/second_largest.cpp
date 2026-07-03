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
    int s_largest=-1;
    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            s_largest=largest;
            largest=arr[i];
            
        }
        else if(arr[i]<largest && arr[i]>s_largest)
        {
            s_largest=arr[i];
        }
        else{
            continue;
        }
    }
    cout<<"Second largest "<<s_largest;
    return 0;
}