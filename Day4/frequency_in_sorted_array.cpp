#include<iostream>
using namespace std;
int firstOccurence(int arr[],int n,int x)
{
    int h=n-1;
    int l=0;
    int ans=-1;
    
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==x)
        {
            ans=mid;
            h=mid-1;
        }
        else if(arr[mid]>x)
        {
            h=mid-1;
        }
        else{
            l=mid+1;
        }

    }
    return ans;
}
int lastOccurence(int arr[],int n,int x)
{
    int h=n-1;
    int l=0;
    int ans=-1;
    
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==x)
        {
            ans=mid;
            l=mid+1;
        }
        else if(arr[mid]>x)
        {
            h=mid-1;
        }
        else{
            l=mid+1;
        }

    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array:"<<endl;

    cin>>n;
    int x;
    cout<<"Enter the element whose frequency you want to count:"<<endl;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
         cin>>arr[i]; 
    }
    int first=firstOccurence(arr,n,x);
    if(first==-1)
    {
        cout<<"Frequency= 0";
        return 0;
    }
    int last=lastOccurence(arr,n,x);
    cout<<"Frequency ="<<last-first+1;
    return 0;

}