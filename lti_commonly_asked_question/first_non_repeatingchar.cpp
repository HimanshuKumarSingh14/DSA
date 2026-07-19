#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    for(char c:s)
    {
        if(mp[c]==1)
        {
            cout<<c;
            return 0;
        }
    }
    return 0;
}