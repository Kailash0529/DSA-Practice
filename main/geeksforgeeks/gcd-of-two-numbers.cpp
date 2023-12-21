class Solution {
public:
    int countPrimes(int n) {
        int ans=0;
        vector<bool>p(n,true);
        if(n==0)return 0;
        p[0]=p[1]=false;
        for(int i=2;i<n;i++)
        {
            if(p[i])
            {
                ans++;
                int j=2*i;
                while(j<n)
                {
                    p[j]=false;
                    j+=i;
                }
            }
        }
        return ans;
    }
};