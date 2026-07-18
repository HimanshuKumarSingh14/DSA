#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_set<char>st;
    int left=0;
    int maxLen=0;
    int start=0;
    for(int right=0;right<s.size();right++)
    {
        while(st.find(s[right])!=st.end())
        {
            st.erase(s[left]);
            left++;


        }
        st.insert(s[right]);
        if(right-left+1>maxLen)
        {
            maxLen=right-left+1;
            start=left;
        }
    }
    cout<<maxLen;
    cout<<s.substr(start,maxLen);
    return 0;
}