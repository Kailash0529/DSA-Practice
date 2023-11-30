#include<iostream>
using namespace std;
int main()
{
    int i=0,j=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    
        {
             int k=0;
        for(j=0;j<((2*n)-1);j++)
       
        {
            if(j<n-i-1)
            {
                cout<<" ";
            }
            else if(k<=2*i)
            {
               cout<<"*";
               k++;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*n-2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}