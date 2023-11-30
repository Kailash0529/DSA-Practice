#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool ispossible(vector <int> a,int k,int m)
{
    int c=1;
    int position=a[0];
    for(int i=1;i<a.size();i++)
    {
        if(a[i]-position>=m)
        {
            c++;
            position=a[i];
        }
        if(c==k)return true;
    }
    return false;
}
int solver(vector <int> a,int n,int k)
{

    sort(a.begin(),a.end());
    int s=0;
    int e=a[n-1]-a[0];
    int ans=-1;
    while(s<=e)
    {
        int m=s+((e-s)>>1);
        if(ispossible(a,k,m))
        {
            ans=m;
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return ans;
}
int main()
{
    vector <int> a={1,2,4,8,9};
    int n =a.size();
    int k;
    cin>>k;
    int jagah=solver(a,n,k);
    cout<<jagah<<endl;
}