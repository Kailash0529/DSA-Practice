#include<iostream>
using namespace std;
int main()
{
    int a[]={1, 2, 2, 2, 4, 5, 6};
    int b[]={2, 4, 5, 9};
    int n=sizeof(a)/sizeof(int);
    int m=sizeof(b)/sizeof(int);
    int j=0;
    for(int i=0;i<n&&j<m;)
    {
        
        if(a[i]<b[j])
        {
i++;
        }
        if(a[i]==b[j])
        {
          cout<<a[i]<<" ";
          i++,j++;
            
        }
        if(a[i]>b[j])
        {
            j++;
        }

    }
}