#include<iostream>
#include<queue>
using namespace std;
int findkthsmallest(int arr[],int n,int k)
{
priority_queue<int>pq;

for(int i=0;i<k;i++)
{
pq.push(arr[i]);
}
for(int i=k;i<n;i++)
{
    if(arr[i]<pq.top())
    {
pq.pop();
pq.push(arr[i]);
    }
}
return pq.top();
}
int findkthgreatest(int arr[],int n,int k)
{
priority_queue<int,vector<int>,greater<int>>pq;
for(int i=0;i<k;i++)
{
    pq.push(arr[i]);
}
for(int i=k;i<n;i++)
{
    if(arr[i]>pq.top())
    {
        pq.pop();
        pq.push(arr[i]);
    }
}
return pq.top();
}
int main()
{
int arr[]={1,9,3,7,10,15};
int n=6;
int k=4;
int sans=findkthsmallest(arr,n,k);
int lans=findkthgreatest(arr,n,k);

cout<<lans;
}