#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int originalno=n;
    int newnum=0;
    while(n>0)
    {
        newnum=newnum*10+n%10;
        n=n/10;
    }
    if(originalno==newnum)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}