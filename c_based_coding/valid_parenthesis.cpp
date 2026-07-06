#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(' ||s[i]=='[' || s[i]=='{')
        {
        st.push(s[i]);
        }
        else{
            if(st.empty()){
                cout<<"Not Valid parenthesis";
                return 0;
            }
            char ch=st.top();
            st.pop();
            if(s[i]==')' && ch!='('|| s[i]==']' && ch!='[' || s[i]=='}' && ch!='{')
            {
                cout<<"Not valid parenthesis";
                return 0;
            }
        }
    }
    if(st.empty())
    {
        cout<<"valid parenthesis";
    }
    else{
        cout<<"Not valid parenthesis";
    }

    return 0;
}