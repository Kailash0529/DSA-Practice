#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //spaces
        for(j=0;j<i+1;j++)
        {
            cout<<i+j+1;
        }
        int k=2*i;
        for(j=0;j<i;j++)
        {
cout<<k;
k=k-1;
        }
        cout<<endl;
    }
}