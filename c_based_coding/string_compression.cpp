#include<iostream>
using namespace std;
string scomp(string s)
{
    string rs="";
    int l=s.size();
    for(int i=0;i<l;i++)
    {
        int count =1;
        while(i<l-1 && s[i]==s[i+1])
        {
            count++;
            i++;
        }
        rs+=s[i];
        rs+=to_string(count);
    }
    return rs;


}
int main()
{
    string s="aaabbc";
    cout<<scomp(s);
    return 0;

}