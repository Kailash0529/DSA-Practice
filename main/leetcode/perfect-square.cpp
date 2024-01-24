class Solution {
public:
int find(int n)
{
     //basecase
        if(n==0)
        {
            return 1;
        }
        if(n<0)
        {
            return 0;
        }
        int i=1;
        int end=sqrt(n);
        int ans=INT_MAX;
        while(i<=end)
        {
int sqre=i*i;
int count=1+find(n-sqre);
if(count<ans)
{
    ans=count;
}
++i;
        }
        return ans;
}
    int numSquares(int n) {
       return (find(n)-1);
    }
};