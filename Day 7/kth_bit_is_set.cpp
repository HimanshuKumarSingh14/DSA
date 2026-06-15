#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    if((n&(1<<k)))
    cout<<"set";
    else cout<<"Not a set bit";

    return 0;
}