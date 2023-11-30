#include<iostream>
using namespace std;
void sortthearray(int n,int*a)
{
    int l=0;
    int j=n-1;
    while(a[l]<j)
    {
        if(a[l]<0)
        {
            l++;
        }
        else if(a[j]>0)
        {
            j--;
        }
        else
        {
int k=a[l];
a[l]=a[j];
a[j]=k;
        }
    

    }


}
int main()
{
    
    int a[]={-1,-2,3,65,-7};
   int n=sizeof(a)/sizeof(int);
    sortthearray(n,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


}