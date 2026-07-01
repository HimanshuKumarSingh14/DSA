#include<iostream>
using namespace std;
bool isRotation(string s1,string s2)
{
    if(s1.length()!=s2.length())
    return false;
    string temp=s1+s2;
    return (temp.find(s1)!=string::npos);
  
}
int main()
{
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    if(isRotation(s1,s2))
    {
        cout<<"True";
    }
    else
    cout<<"False";
    return 0;
}