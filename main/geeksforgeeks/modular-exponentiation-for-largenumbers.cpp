//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    // Code here
		    long long ans=1;
		    while(n>0)
		    {
		        if(n&1)
		        {
		            ans=(ans*x)%M;
		        }
		        x=(x*x)%M;
		        n>>=1;
		    }
		    return ans;
		}
};
 
//{ Driver Code Starts.

// } Driver Code Ends