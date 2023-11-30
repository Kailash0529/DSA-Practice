#include<iostream>
using namespace std;
void kailash(int *arr,int n)
{
for(int i=0;i<n;i++)
{
    int index=arr[i];
    for(int j=i+1;j<n;j++)
    {
if(arr[index]==arr[j])
{
    cout<<"repeat catched"<<arr[j];
    
}
    }
      
}
}
int main()
{
    int n;
    int arr[]={1,2,3,3,4};
    n=sizeof(arr)/sizeof(int);
    kailash(arr,n);
}