class Solution {
  public:
  int solve(int faces,int dice,int target)
  {
      if(target<0)
      {
          return 0;
      }
      if(dice!=0&&target==0)
      {
          return 0;
      }
      if(dice==0&&target==0)
      {
          
          return 1;
      }
      if(dice==0&&target!=0)
      {
          return 0;
      }
      long long ans=0;
      for(int i=1;i<=faces;i++)
      {
          ans=ans+solve(faces,dice-1,target-i);
      }
      return ans;
      
  }
  long long solveMem(int faces,int dice,int target, vector<vector<long long>>&dp)
  {
      if(target<0)
      {
          return 0;
      }
      if(dice!=0&&target==0)
      {
          return 0;
      }
      if(dice==0&&target==0)
      {
          
          return 1;
      }
      if(dice==0&&target!=0)
      {
          return 0;
      }
      if(dp[dice][target]!=-1)
      {
          return dp[dice][target];
      }
      long long ans=0;
      for(int i=1;i<=faces;i++)
      {
          ans=ans+solveMem(faces,dice-1,target-i,dp);
      }
      dp[dice][target]=ans;
      return dp[dice][target];
      
  }
  
    long long noOfWays(int M , int N , int X) {
        // code here
        vector<vector<long long>>dp(N+1,vector<long long>(X+1,-1)); 
        return solveMem(M,N,X,dp);
        
    }
};