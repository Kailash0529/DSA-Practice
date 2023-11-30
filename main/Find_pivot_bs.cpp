#include<iostream>
#include<vector>
using namespace std;
int findpivot(vector<int> k,int n)
{
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<=e)
    {
        

        if(m+1<=e&&k[m]>k[m+1])
        {
            return m;
        }
        if(m-1>=s&&k[m-1]>k[m])
        {
            return m-1;
        }
        if(k[s]>k[m])
        {
            e=m-1;
        }
        else{
            s=m+1;
        }
    m=s+(e-s)/2;

    }
}
int main()
{
    vector<int> k={9,2,3,4,5,6};
    int n=k.size();
    int ans= findpivot(k,n);
    cout<<"pivot element is: "<<k[ans]<<endl;
}