#include<iostream>
using namespace std;
int b_s(int a[],int s,int e,int x)
{
   
    while(s<=e)
    {
         int m=s+(e-s)/2;
        if(a[m]==x)
        return m;
       
        if(a[m]<x)
        {
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=s+(e-s)/2;
        
    }
    return -1;
}
int expo(int a[],int n,int x)
{
    if(a[0]==x)return 0;
    int i=1;
    while(i<n&&a[i]<=x)
    {
i*=2;

    }
    return b_s(a,i/2,min(i,n-1),x);
}
int main()
{
    int a[]={1,5,8,9,11,13,15,17,19};
    int n=sizeof(a)/sizeof(int);
    int x;
    cout<<"enter the number to search: "<<endl;
    cin>>x;
    int ans=expo(a,n,x);
    cout<<ans;
}