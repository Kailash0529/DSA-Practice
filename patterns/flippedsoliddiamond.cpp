#include<iostream>
using namespace std;
int main()
{
    int i=0,j=0,n;
    cin>>n;
    for(i=0;i<n;i++)
        {
            for(j=0;j<n-i;j++)
        {
            cout<<"*";
        }
             for(j=0;j<2*i+1;j++)
             {
                cout<<" ";
             }
            //  cout<<endl;
        for(j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    // cout<<endl;
    for(i=0;i<n;i++)
   {
         for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        // cout<<endl;
        for(j=0;j<2*n-2*i-1;j++)
        {
    cout<<" ";            
        }
        for(j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}