#include<iostream>
#include<vector>
using namespace std;
bool find(vector<int>&nums,vector<int> &count)
{
    for(int i=0;i<nums.size();i++)
    {
        count[nums[i]]++;
        if(count[nums[i]]>1)return true;
    }
    
    return false;
}
int main()
{
    vector<int>nums={1,2,5,4,1};
    vector<int> count(5,0);
    // for(int i=0;i<)
   cout<< find(nums,count);
}