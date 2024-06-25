#include <bits/stdc++.h> 
#include <vector>
using namespace std;
int solve(vector<int> weight, vector<int> value, int index, int capacity)
{
	if(index==0)
	{
		if(weight[0]<=capacity)
	{
		return value[index];
	}
	else{
		return 0;
	}
	}
	int include=0;
	if(weight[index]<=capacity)
	include=value[index]+solve(weight,value,index-1,capacity-weight[index]);
		int exclude=0+solve(weight,value,index-1,capacity);
		int ans=max(include,exclude);
		return ans;


}
int solveMemo(vector<int> weight, vector<int> value, int index, int capacity,vector<vector<int>>&dp)
{
	if(index==0)
	{
		if(weight[0]<=capacity)
	{
		return value[index];
	}
	else{
		return 0;
	}
	}
	if(dp[index][capacity]!=-1)
	{
		return dp[index][capacity];
	}
	int include=0;
	if(weight[index]<=capacity)
	include=value[index]+solveMemo(weight,value,index-1,capacity-weight[index],dp);
		int exclude=0+solveMemo(weight,value,index-1,capacity,dp);
		dp[index][capacity]=max(include,exclude);
		return dp[index][capacity];


}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<vector<int>>dp(n,vector<int>(maxWeight+1,-1));
	// Write your code here
return	solveMemo(weight,value,n-1,maxWeight,dp);

}