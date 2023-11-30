#include<iostream>
#include<vector>
using namespace std;
int findout( vector<int> k,int n)
{
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<=e)
    {
        if(s==e)
        {
            return s;
        }
        if(m%2==0)
        {
            if(k[m]==k[m+1])
            {
                s=m+2;
            }
            else{
                e=m;
            }
        }
        else
        {
            if(k[m]==k[m+1])
            {
                e=m-1;
            }
            else if(k[m]==k[m-1])
            {
s=m+1;
            }
        }
        m=s+(e-s)/2;
    }

}
int main()
{
    vector<int> k={1,1,2,2,3,3,4,4,5,5,6};
    int n=k.size();
    int ans=findout(k,n);
    cout<<"Index Is: "<<ans<<endl;
    cout<<"Element Is: "<<k[ans]<<endl;
    return 0;

}