class Solution {
public:
void find(vector<int>&nums,vector<vector<int>>&ans,int start)
{
    //basecase
if(start==nums.size())
{
    ans.push_back(nums);
    return;
}
    //main
    unordered_map<int,bool>mp;
    for(int i=start;i<nums.size();i++)
    {
        if(mp.find(nums[i])!=mp.end())
        {
            continue;
        }
        mp[nums[i]]=true;
        swap(nums[start],nums[i]);
        find(nums,ans,start+1);
        swap(nums[start],nums[i]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        find(nums,ans,0);
return ans;
    }
};