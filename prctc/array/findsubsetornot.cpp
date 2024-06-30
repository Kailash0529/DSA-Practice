#include<iostream>
using namespace std;
int main()

{
    int arr1[]={1,5,9,30};
    int arr2[]={11,9,25,5,30,80,1};
    int fre[80]={0};
    for(int i=0;i<4;i++)
    {
        fre[arr1[i]]++;
    }
    for(int j=0;j<7;j++)
    {
        fre[arr2[j]]++;
    }
    for(int k=0;k<4;k++)
    {
        if(fre[arr1[k]]!=2)
        {
            cout<<"no"<<endl;
            return 0;
        }
    }
    cout<<"yes"<<endl;
    return 0;
    

}