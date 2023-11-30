#include<iostream>
using namespace std;
int i,j,n;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        {
             for(int j=0;j<i+1;j++)
        {
            int kai=j+1;
            char ch=kai+'A'-1;
            
            cout<<ch;
           
        }
        
       
        for(j=i ;j>0;j--)
        {
            int kai=j;
            char ch=kai+'A' -1;
            
            // cout<<j+1;
        cout<<ch;
        }
        cout<<endl;
        }
}