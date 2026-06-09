#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maximum_diff=INT_MIN;
    int minElements=arr[0];
    for(int i=1;i<n;i++)
    {
        maximum_diff=max(maximum_diff,arr[i]-minElements);
        minElements=min(minElements,arr[i]);
    }
    cout<<"Maximum difference is: "<<maximum_diff<<endl;
    return 0;
}