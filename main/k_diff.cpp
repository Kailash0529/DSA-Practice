#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int finddiff(vector<int>nums,int n,int k)
{
    int i=0;
    int j=1;
    sort(nums.begin(),nums.end());
    set<pair<int,int>>ans;
    while(j<n)
    {
    int diff=nums[j]-nums[i];

        if(diff==k)
        {
          ans.insert({nums[i],nums[j]});
            ++i,++j;
        }
        else if(diff>k)
        {
            ++i;
        }
        else{
            ++j;
            
        }
        if(i==j)
        {
j++;
        }
        
    }
        return ans.size();

}
int main()
{
    vector<int>nums={1,2,2,3,5,8,1};
    int n=nums.size();
    int k;
    cin>>k;
    int ans=finddiff(nums,n,k);
    cout<<ans;
}