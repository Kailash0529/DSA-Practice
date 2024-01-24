#include<iostream>
using namespace std;
void merge(int *arr,int s,int e)
{
    int m=(s+e)/2;
    int len1=m-s+1;
    int len2=e-m;
    int *left=new int[len1];
    int *right=new int [len2];
    int k=s;
    for(int i=0;i<len1;i++)
    {
        left[i]=arr[k];
        k++;
    }
    k=m+1;
    for(int i=0;i<len2;i++)
    {
        right[i]=arr[k];
        k++;
    }
    int leftindex=0;
    int rightindex=0;
    int mainindex=s;
    while(leftindex<len1&&rightindex<len2)
    {
        if(left[leftindex]<right[rightindex])
        {

            arr[mainindex++]=left[leftindex++];
        }
        else{
            arr[mainindex++]=right[rightindex++];
        }
    }
    while(leftindex<len1)
    {
        arr[mainindex++]=left[leftindex++];
    }
    while(rightindex<len2)
    {
        arr[mainindex++]=right[rightindex++];
    }


}
void merges(int *arr,int s,int e){
    //basecase
    if(s>=e)return;
    int m=(s+e)/2;
    merges(arr,s,m);
    merges(arr,m+1,e);
    merge(arr,s,e);
}
int main()
{
    int arr[]={5,8,9,6,6,6};
    int n=6;
    int s=0;
    int e=n-1;
    merges(arr,s,e);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}