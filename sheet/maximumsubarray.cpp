#include<iostream>
#include<vector>
using namespace std;
void find(vector<int>&k,int start,int end,int &maxsum,int&maxstart,int&maxend)
{
    //basecase
    if(start==k.size())
    {
        return;
    }
    int sum=0;

    for(int i=start;i<end;i++)
    {
sum+=k[i];
    }
if(sum>maxsum){
    maxstart=start;
    maxend=end-1;
    maxsum=sum;
    // cout<<start<<end-1;
    
    }

    if(end<k.size())
    {
        find(k,start,end+1,maxsum,maxstart,maxend);
    }
    else{
        find(k,start+1,start+1,maxsum,maxstart,maxend);
    }
}
int main()
{
    vector<int>k={5,-9,6,-2,8,6,-7};
    int start=0;
    int end=start;
    int maxsum=INT16_MIN;
    int maxstart=0;
    int maxend=0;
    find(k,start,end,maxsum,maxstart,maxend);
    cout<<maxsum<<endl;
    for(int i=maxstart;i<=maxend;i++)
    {
        cout<<k[i];
    }

}