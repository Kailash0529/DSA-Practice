#include<iostream>
using namespace std;
void merge(int *arr,int s,int m,int e)
{
int leftsize=(m-s)+1;
int rightsize=e-m;

    int left[leftsize];
    int right[rightsize];
    int k=s;
    for(int i=0;i<leftsize;i++)
    {
        left[i]=arr[k++];

    }
    k=m+1;
    for(int i=0;i<rightsize;i++)
    {
        right[i]=arr[k++];
    }
    int mainindex=s;
    int leftindex=0,rightindex=0;
    while(leftindex<leftsize&&rightindex<rightsize)
    {

        if(left[leftindex]<right[rightindex])
        {
            arr[mainindex++]=left[leftindex++];
        }
        else{
            arr[mainindex++]=right[rightindex++];
        }
        
    }
    while(leftindex<leftsize)
    {
        arr[mainindex++]=left[leftindex++];
    }
     while(rightindex<rightsize)
    {
        arr[mainindex++]=right[rightindex++];
    }
}
void ms(int *arr,int s,int e)
{
if(s>=e)return;
int m=(s+e)/2;
ms(arr,s,m);
ms(arr,m+1,e);
merge(arr,s,m,e);
}
int main()
{
int arr[]={1,8,5,4,9,7,6,2,3,5};
int n=sizeof(arr)/sizeof(int);
int s=0;int e=n-1;
ms(arr,s,e);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}