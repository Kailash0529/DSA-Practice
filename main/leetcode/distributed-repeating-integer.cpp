class Solution {
public:
bool find(vector<int>&counts,vector<int>&quantity,int ith)
{
    //basecase
if(ith==quantity.size())
{
    return true;
}
    //main
    for(int i=0;i<counts.size();i++)
    {
        if(counts[i]>=quantity[ith])
        {
            counts[i]-=quantity[ith];
            if(find(counts,quantity,ith+1))
            {
                return true;
            }
            counts[i]+=quantity[ith];
        
        }
    }
        return false;

}
    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        unordered_map<int,int>countmap;
        for(auto i:nums)
        {
            countmap[i]++;
        }
        vector<int>counts;
        for(auto i:countmap)
        {
            counts.push_back(i.second);
        }
        sort(quantity.rbegin(),quantity.rend());
        return find(counts,quantity,0);

    }
};