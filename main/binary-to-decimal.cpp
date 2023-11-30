#include<iostream>
#include<cmath>
using namespace std;
int binarytodecimal(int n)
{
int i=0,ans=0;
while(n)
{
    int m=n%10;
    ans=m*pow(2,i++)+ans;
    n=n/10;
}
cout<<ans;
}
int main()
{
int n;
cout<<"enter the binary code";
cin>>n;
int decimal=binarytodecimal(n);
}