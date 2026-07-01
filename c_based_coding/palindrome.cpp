#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int main()
{
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    stack<char>st;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        st.push(s[i]);
    }
    int i;
    for(i=0;i<l;i++)
    {
        char c=st.top();
        st.pop();
        if(s[i]!=c)
        {
            cout<<"Not palindrome";
            return 0;
        }
    }
    cout<<"palindrome";
    return 0;
}