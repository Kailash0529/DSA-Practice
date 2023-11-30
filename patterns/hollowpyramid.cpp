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
                if(k==0||k==2*i||i==n-1){
 cout<<"*";
                }
                else{
                    cout<<" ";
                }
              
               k++;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}