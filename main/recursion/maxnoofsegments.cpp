#include<iostream>
#include<limits.h>
using namespace std;
int find(int n,int &x,int &y,int &z)
{
    //basecase
    if(n==0)return 0;
    if(n<0)return INT_MIN;
    //ek case solve karlo
    int ans1=find(n-x,x,y,z)+1;
    int ans2=find(n-y,x,y,z)+1;
    int ans3=find(n-z,x,y,z)+1;
    int maxi=INT_MIN;
    maxi=max(ans1,max(ans2,ans3));
    return maxi;


}
int main()
{
    int n=7,x=5,y=2,z=2;
    int ans=find(n,x,y,z);
    if(ans<0)
    {
        cout<<"0";
    }
    cout<<ans<<endl;

}