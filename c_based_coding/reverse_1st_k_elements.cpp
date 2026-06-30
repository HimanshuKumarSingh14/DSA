#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
    queue<int>q;
    stack<int>s;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    int k;
    cin>>k;
    if(q.empty() || k>q.size())
    {
        return 0;
    }
    for(int i=0;i<k;i++)
    {
        int x=q.front();
        q.pop();
        s.push(x);
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    for(int i=0;i<q.size()-k;i++)
    {
        q.push(q.front());
        q.pop();
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}