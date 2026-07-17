#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int left=0;
    int right=l-1;
    while(left<right)
    {
        swap(s[left],s[right]);
        left++;
        right--;
    }
    for(char c:s)
    {
        cout<<c<<;
    }
    return 0;

}