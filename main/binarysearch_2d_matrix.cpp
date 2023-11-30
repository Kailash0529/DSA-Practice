#include<iostream>
using namespace std;
bool findfun(int arr[][4],int r,int c,int target)
{
int total=r*c;
int s=0;
int e=total-1;
int m=(s+e)/2;
while(s<=e)
{
    int i=m/c;
    int j=m%c;
    if(arr[i][j]==target)
    {
        cout<<arr[i][j]<<" is found at "<<"index = "<<m<<endl;
        return true;
    }
    else if(arr[i][j]>target)
    {
        e=m-1;
    }
    else{
        s=m+1;
    }
    m=(s+e)/2;
}
return false;
}
int main()
{
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int m=5,n=4;

    // int total=m*n;
    int target;
    cin>>target;
    bool ans=findfun(arr,m,n,target);
    if(!ans)
    {
        cout<<target<<"not found"<<endl;
    }
    // cout<<ans;
    
    return 0;
}