class Solution {
public:
void find(vector<int>& candidates, vector<vector<int>>&ans,vector<int>&v,int target,int index)
{
    if(target==0)
    {
        ans.push_back(v);
        return;
    }
    if(target<0)return;
    for(int i=index;i<candidates.size();i++)
    {
        v.push_back(candidates[i]);
        find(candidates,ans,v,target-candidates[i],i);
        v.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        find(candidates,ans,v,target,0);
        return ans;
    }
};