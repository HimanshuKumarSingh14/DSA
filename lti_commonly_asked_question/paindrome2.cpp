#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s1;
    for(int i=s.size()-1;i>=0;i--)
    {
        s1+=s[i];
    }
    if(s1==s)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}