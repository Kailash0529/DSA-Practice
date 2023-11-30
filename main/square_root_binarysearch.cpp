#include<iostream>
using namespace std;
int sqrt(int n)
{
    int s=0;
    int e=n;
    int target=n;
    int tem=-1;
    while(s<=e)
    {
    int m=s+(e-s)/2;

        if(m*m==target)
        {
            tem=m;
            return tem;
        }
        else if(m*m>target)
        {
            e=m-1;
        }
        else{
            tem=m;
            s=m+1;
        }
        
    }
    return tem;
}
int main()
{
int n;
cout<<"enter the digit:"<<endl;
cin>>n;
double ans=sqrt(n);
int p;
// cout<<ans;
// precision adding
cout<<"enter precision:";
cin>>p;
double step=0.1;
for(int i=0;i<p;i++)
{
    for(double j=ans;j*j<=n;j=j+step)
    {
ans=j;
    }
    step=step/10;
}
    cout<<"final ans is "<<ans<<endl;



return 0;
}