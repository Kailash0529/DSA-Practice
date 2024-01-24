class Solution {
public:
int find(vector<int>&nums,int i)
{
    //basecase
    if(i>=nums.size())
    {
        return 0;
    }
    //ek case solve karlo
    int rob1=nums[i]+find(nums,i+2);
    int rob2=0+find(nums,i+1);
    return max(rob1,rob2);

}
    int rob(vector<int>& nums) {
        int i=0;
       return find(nums,i);
    }
};