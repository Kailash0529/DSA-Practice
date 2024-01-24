class Solution {
public:
void find(vector<int>&kj,int &n ,int &ans,int currnum)
{
    if(currnum==n+1)
    {
        ++ans;
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(kj[i]==0&&(currnum%i==0||i%currnum==0))
        {
            kj[i]=currnum;
            find(kj,n,ans,currnum+1);
            kj[i]=0; 
        }

    }
    
}
    int countArrangement(int n) {
        vector<int>kj(n+1);
        int ans=0;
        find(kj,n,ans,1);
        return ans;
    }
};