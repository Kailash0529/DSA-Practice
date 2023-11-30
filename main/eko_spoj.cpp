#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispossiblesolution(vector <long long int> tree,long long int c,long long int m)
{
    long long int woodsum=0;
    for(int i=0;i<tree.size();i++)
    {
        if(tree[i]>m)
        {
            woodsum+=tree[i]-m;
        }
    }
    return woodsum>=c;

}
long long int solver( vector <long long int> tree, long long int c){
    long long int s=0,e=*max(tree.begin(),tree.end());
    long long int ans;
    while(s<=e)
    {
        long long int m=s+((e-s)>>1);
       
            if(ispossiblesolution(tree,c,m))
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
    long long int c,n;
    vector <long long int> tree={10,30,40};
    n=sizeof(tree);
    cin>>c;
    cout<<solver(tree,c)<<endl;
}