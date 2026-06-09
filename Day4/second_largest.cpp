#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    int slargest=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
        }
        if(arr[i]<largest && slargest<arr[i])
        {
            slargest=arr[i];
        }
    }
    cout<<"Second largest element "<<slargest;

    return 0;
}