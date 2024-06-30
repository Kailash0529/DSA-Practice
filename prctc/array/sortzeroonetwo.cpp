#include<iostream>
using namespace std;
int main()

{
    int arr[]={0,1,0,2,1,0,2,2,1,1,0,0,1,2,0,1,2,0,1,2,0,1,2,0,1,2,0};
    int n=27;
    int zero=0,one=0,two=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)zero++;
        if(arr[i]==1)one++;
        if(arr[i]==2)two++;
    }
    while(zero--)
    {
        cout<<"0"<<" ";
    }
    while(one--)
    {
        cout<<"1"<<" ";
    }
    while(two--)

    {
        cout<<"2"<<" ";
    }
}