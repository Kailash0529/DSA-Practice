#include<iostream>
using namespace std;
int main()
{
    int a[]={4,4,2,9,3,5,8,1,1};
    int b[]={5,3,9,4,5,1,1,6,6,4,2,9,8};
    int f[50]={0};
    for(int i=0;i<9;i++)
    {
        f[a[i]]++;
    }
    for(int j=0;j<13;j++)
    {
        f[b[j]]--;
    }
    for(int i=0;i<9;i++)
    {
        if(f[a[i]]==0||f[a[i]]<0)
        {
            cout<<a[i]<<" ";
        }
    }
}