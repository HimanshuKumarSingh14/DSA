#include<iostream>
#include<stack>
using namespace std;
void sortStack(stack<int>&st)
{
    stack<int>temp;
    while(!st.empty())
    {
        int x=st.top();
        st.pop();
        while(!temp.empty() && temp.top()>x)
        {
            st.push(temp.top());
            temp.pop();
        }
        temp.push(x);
    }
    while(!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}
int main()
{
    stack<int>st;
    st.push(7);
    st.push(8);
    st.push(1);
    st.push(3);
    st.push(4);
    sortStack(st);
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    return 0;

}
