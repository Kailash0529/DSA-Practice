class Solution {
public:
int find(vector<int>&nums,int s,int e)
{
    if(s==e)return nums[s];
    int m=s+((e-s)>>1);
    int maxLeftbordersum=INT_MIN,maxRightbordersum=INT_MIN;
   int maxLeftsum=find(nums,s,m);
    int maxRightsum=find(nums,m+1,e);
    int leftbordersum=0,rightbordersum=0;
    for(int i=m;i>=s;i--)
    {
        leftbordersum+=nums[i];
        if(leftbordersum>maxLeftbordersum)maxLeftbordersum=leftbordersum;
    }
    for(int i=m+1;i<=e;i++)
    {
        rightbordersum+=nums[i];
        if(rightbordersum>maxRightbordersum)maxRightbordersum=rightbordersum;
    }
    int crossbordersum=maxLeftbordersum+maxRightbordersum;
    return max(maxLeftsum,max(maxRightsum,crossbordersum));
}
    int maxSubArray(vector<int>& nums) {
       int ans= find(nums,0,nums.size()-1);
       return ans;
    }
};