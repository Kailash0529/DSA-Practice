#include<iostream>
#include<cmath>
using namespace std;
int decimaltobinary(int n)
{
    while(n>0)
    {
        int r=n%2,i=0;
        int ans=0;
        cout<<r;
        ans=r*pow(10 , i++)+ans;
        n=n/2;
    }
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int binary=decimaltobinary(n);
    
}