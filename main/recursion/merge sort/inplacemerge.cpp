class Solution {
public:
void inplacemerge(vector<int>&nums,int s,int m,int e)
{
    int len=e-s+1;
    int gap=len/2+len%2;
    while(gap>0)
    {
        int i=s,j=s+gap;
        while(j<=e)
        {
            if(nums[i]>nums[j])
            {
                swap(nums[i],nums[j]);
            }
            i++,j++;
        }
        gap=gap<=1 ? 0:(gap/2)+(gap%2);
    }
}
void mergesort(vector<int>&nums,int s,int e)
{
    if(s>=e)return;
    int m=s+(e-s)/2;
    mergesort(nums,s,m);
    mergesort(nums,m+1,e);
    inplacemerge(nums,s,m,e);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};