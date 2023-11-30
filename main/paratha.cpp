#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispossiblesolution(vector<int>rank,int np,int m)
{
    int curr=0;
    for(int i=0;i<rank.size();i++)
    {
        int R=rank[i],j=1;
        int timetaken =0;
        while(true)
        {
            if(timetaken+j*R<=m)
            {
                ++curr;
                timetaken+=j*R;
                j++;
            }
            else{
                break;
            }
        }
        if(curr>=np)
        {
            return true;
        }
        else{
            false;
        }
    }
}
int mainsolver(vector<int>rank,int np)
{
 int s=0;
int highestrank=*max_element(rank.begin(),rank.end());
int e=highestrank*(np*(np+1)>>1);
int ans=-1;
while(s<=e)
{
    int m=(s+e)>>1;
    if(ispossiblesolution(rank,np,m))
    {
        ans=m;
        e=m-1;
    }
    else
    {
        s=m+1;
    }
}
return ans;
}
int main()
{
vector<int>rank={1,2,3,4};
int np=10;
int mintime=mainsolver(rank,np);
cout<<mintime<<endl;
}