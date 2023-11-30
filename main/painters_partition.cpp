#include<iostream>
using namespace std;
bool isright(int a[],int k,int n,int m)
{
    int sum=0;
    int c=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>m)return false;
        if(sum+a[i]>m)
        {
            c++;
            sum=a[i];
            if(c>k)return false;
        }
    else{
             sum+=a[i];   
        }
    }
    return true;
}
int findpainters(int a[],int k,int n)
{
int s=0;
int e=0;
for(int i=0;i<n;i++)
{
    e+=a[i];
}
int ans;
while(s<=e)
{
int m=s+(e-s)/2;

    if(isright(a,k,n,m))
    {
        ans=m;
        e=m-1;
    }
    else{
        s=m+1;
    }
    
//  cout<<m;

}

return ans;
}
int main()
{
    int a[]={10,20,30,40};
    int n=sizeof(a)/sizeof(int);
    int k;
    cin>>k;
    int khuchu=findpainters(a,k,n);
    cout<<khuchu<<endl;
}