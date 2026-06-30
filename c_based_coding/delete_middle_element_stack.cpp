#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
void deleteMid(stack<int> &st,int curr,int mid)
{
    if(curr==mid)
    {
        st.pop();
        return;
    }
    int temp=st.top();
    st.pop();
    deleteMid(st,curr+1,mid);
    st.push(temp);
}
void deleteMiddle(stack<int> &st)
{
    int n=st.size();
    int mid=n/2;
    deleteMid(st,0,mid);

}
int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    deleteMiddle(st);
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    return 0;
}