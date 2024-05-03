class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>maxheap;
        for(int i=0;i<piles.size();i++)
        {
            maxheap.push(piles[i]);
        }
        while(k--)
        {
            int ele=maxheap.top();
            maxheap.pop();
            ele=ele-floor(ele/2);
            maxheap.push(ele);
        }
        int ans=0;
        while(!maxheap.empty())
        {
            int ele=maxheap.top();
            maxheap.pop();
            ans+=ele;
        }
        return ans;
    }
};