#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
    int pivot=s;
    int pivotele=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
if(arr[i]<=pivotele)count++;
    }
     int newpivot=s+count;
     swap(arr[pivot],arr[newpivot]);
     pivot=newpivot;
     int i=s,j=e;
     while(i<pivot&&j>pivot)
     {
        while(arr[i]<=pivotele)i++;
        cout<<pivotele<<"that";
        while(arr[j]>pivotele)j--;
        if(i<pivot&&j>pivot)swap(arr[i],arr[j]);

     }

     return pivot;

}
 void qs(int arr[],int s,int e)
{//basecase
    if(s>=e)return;
    int p=partition(arr,s,e);
    qs(arr,s,p-1);
    qs(arr,p+1,e);
}
int main()
{
    int arr[]={3,5,9,7,6,4};
    int n=6;
    int s=0,e=n-1;
    qs(arr,s,e);
    for(int i=0;i<n;i++)

    {
        cout<<arr[i]<<endl;
    }
}