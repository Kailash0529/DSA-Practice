class Solution {
public:
void find(vector<int>& newv, vector<vector<int>>&ans,vector<int>&v,int target,int index)
{
    if(target==0)
    {
        ans.push_back(v);
        return;
    }
    if(target<0)return;
    
for(int i=index;i<newv.size();i++)
    {
        v.push_back(newv[i]);
        find(newv,ans,v,target-newv[i],i+1);
        v.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        vector<int>count(101,0);
        vector<int>newv;
        for(int i=0;i<candidates.size();i++)
        {
            count[candidates[i]]+=1;
        }
        for(int i=0;i<count.size();i++)
        {
            if(count[i]==1)
            {
                newv.push_back(i);
            }
            else if(count[i]>1)
            {
                newv.push_back(i);
                count[i]=0;
            }
        }
        find(newv,ans,v,target,0);
        return ans;
    }
};