#include<iostream>
using namespace std;
int main()
{
    int r;
    cin>>r;
    int c;
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0 || i==r-1 || j==0 || j==c-1)
            {
                cout<<arr[i][j]<<" ";
            }
        }
    }
    
    return 0;
}