#include<iostream>
using namespace std;
int partition(int a[],int s,int e)
{
    // int n=sizeof(a)/sizeof(int);

    int pivot=s;
    int pivotele=a[s];
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
if(a[i]<=pivotele)count++;
    }
    int newpivot=count+pivot;
    swap(a[pivot],a[newpivot]);
    pivot=newpivot;
    int i=s,j=e;
    while(i<pivot&&j>pivot)
     {
        while(a[i]<=pivotele)i++;
        cout<<pivotele<<"that";
        while(a[j]>pivotele)j--;
        if(i<pivot&&j>pivot)swap(a[i],a[j]);

     }
return pivot;
}
void qs(int a[],int s,int e)
{
    if(s>=e)return;
int m=partition(a,s,e);
qs(a,s,m-1);
qs(a,m+1,e);
}
int main()
{
    int a[]={1,4,8,5,7,9,3,7,5,1,4,6,9};
    int n=13;
    int s=0,e=n-1;
    qs(a,s,e);
    for(auto i:a){
        cout<<i<<" ";
    }
}