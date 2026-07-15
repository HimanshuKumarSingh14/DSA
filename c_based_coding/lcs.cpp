#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_set<char>st;
    int left=0;
    int maxLen=0;
    for(int i=0;i<s.size();i++)
    {
        while(st.find(s[i])!=st.end())
        {
            st.erase(s[left]);
            left++;
        }
        st.insert(s[i]);
        maxLen=max(maxLen,i-left+1);
    }
    cout<<maxLen;
    return 0;
}