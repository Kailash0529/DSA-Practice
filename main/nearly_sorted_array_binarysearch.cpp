#include<iostream>
using namespace std;
int bsearch(int arr[],int n,int val)
{
     int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[m]==val)
        {
return m;
        }
        if(arr[m-1]>=0&&arr[m-1]==val)
        {
return m-1;
        }
        if(arr[m+1]<=n&&arr[m+1]==val)
        {
return m+1;
        }
        else if(arr[m]>val)
        {
            e=m-2;
        }
        else{
            s=m+2;
        }
        m=s+(e-s)/2;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,6,5};
    int n=sizeof(arr)/sizeof(int);
    int val;
    cin>>val;
   int ans=bsearch(arr,n,val);
   if(ans!=-1)
   {
    cout<<val<<" is found at loaction = "<<ans<<endl;
   }
   else{
    cout<<val<<" Is not found in the array"<<endl;
   }

   return 0;
}