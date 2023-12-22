#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int find(vector<int>&k,int i,int sum,int &maxi)
{
//basecase
if(i>=k.size())
{
    maxi=max(maxi,sum);
    return maxi;
}
//ek case aap solve karlo
//include
find(k,i+2,sum+k[i],maxi);
//exclude
find(k,i+1,sum,maxi);
}
int main()
{
    vector<int>k={1,6,9,5};
    int i=0;
    int sum=0;
    int maxi=INT_MIN;

    cout<<find(k,i,sum,maxi)<<endl;
    return 0;
}