#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
string remove_dup(string s)
{
    stack<char>st;
    for(char c:s)
    {
        if(!st.empty() && st.top()==c)
        {
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    string res="";
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}
int main()
{
    string s;
    cin>>s;
    cout<<remove_dup(s);
    return 0;
}