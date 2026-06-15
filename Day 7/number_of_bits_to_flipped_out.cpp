#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int xr=a^b;
    int count=0;
    while(xr)
    {
        xr=xr&(xr-1);
        count++;

    }
    cout<<count;
    return 0;
}