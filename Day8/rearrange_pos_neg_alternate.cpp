#include<iostream>
#include<vector>
using namespace std;
vector<int>rearrangeArray(vector<int>&nums)
{
    vector<int>pos,neg;
    for(int x:nums)
    {
        if(x>0)
        pos.push_back(x);
        else{
            neg.push_back(x);
        }
    }
    vector<int>result;
    int i=0;
    int j=0;
    while ((i<pos.size()) && j<neg.size())
    {
        result.push_back(pos[i++]);
        result.push_back(neg[j++]);
    }
    while(i<pos.size())
    {
        result.push_back(pos[i++]);
    }
    while(j<neg.size())
    {
        result.push_back(neg[j++]);
    }
    return result;
    

}
int main()
{
    vector<int>nums={1,2,-3,-1,-2,-3};
    vector<int>ans=rearrangeArray(nums);
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}