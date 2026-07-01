#include<iostream>
#include<algorithm>
using namespace std;
string reverseS(string s)
{
    int l=s.length()-1;
    int i=0;
    while(i<l)
    {
        swap(s[i],s[l]);
        i++;
        l--;
    }
    return s;
}
int main()
{
    string s;
    cin>>s;
    cout<<reverseS(s)<<endl;
    int n=s.length();
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}