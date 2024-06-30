#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,6,-9,-7,-1,10,15,16,-44};
    int np=0;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            swap(arr[i],arr[np++]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}