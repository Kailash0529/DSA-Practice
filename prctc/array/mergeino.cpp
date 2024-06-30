#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int arr1[]={1,2,8,9}; 
int arr2[]={3,4,6,7};
for(int i=0;i<4;i++)
{
if(arr1[i]>arr2[0])
{
    swap(arr1[i],arr2[0]);
    sort(arr2,arr2+4);
}
}
for(int i=0;i<4;i++)
{
    cout<<arr1[i]<<" ";
}
for(int i=0;i<4;i++)
{
    cout<<arr2[i]<<" ";
}
}