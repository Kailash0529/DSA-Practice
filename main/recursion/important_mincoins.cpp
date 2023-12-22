#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
// int find(vector<int>&k,int v)
// {
//     //basecase
//     if(v==0)
//     {
//         return 0;
//     }
//     if(v<0)
//     {
//         return INT_MAX;
//     }

//     //ek case solve karlo
// int mini=INT_MAX;

//     int ans=INT_MAX;
//     for(int i=0;i<k.size();i++)
//     {
// int ans=find(k,v-k[i]);
// if(ans!=INT_MAX)
// {
//     mini=min(mini,ans+1);
// }
//     }
//     return mini;

// }
int find(vector<int>&k,int v,int smpl)
{
    //basecase
    if(smpl==v)
    {
        return 0;
    }
    if(smpl>v)
    {
        return INT_MAX;
    }

    //ek case solve karlo
int mini=INT_MAX;

    int ans=INT_MAX;
    for(int i=0;i<k.size();i++)
    {
int ans=find(k,v,smpl+k[i]);
if(ans!=INT_MAX)
{
    mini=min(mini,ans+1);
}
    }
    return mini;

}
int main()
{
    vector<int>k={2,3};
    int target=5;
    int smpl=0;

    cout<<find(k,target,smpl)<<endl;
}