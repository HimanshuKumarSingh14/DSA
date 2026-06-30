#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin() ,::tolower);
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            continue;
        }
        st.push(s[i]);
    }
    int i;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            continue;
        }
        int top=st.top();
        st.pop();
        if(s[i]!=top)
        {
            cout<<"Not palindrome";
            return 0;
        }
    }
    if(i==s.size())
    {
        cout<<"Palindrome";
    }
    return 0;
}