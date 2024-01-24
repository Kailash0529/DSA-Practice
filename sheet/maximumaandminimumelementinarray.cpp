#include<iostream>
using namespace std;
int find(int arr[],int &i,int &maxi,int &mini)
{
    if(i==5 - 1)
    {
        return maxi,mini;
    }
    
    if(arr[i]>maxi)
    {
        maxi=arr[i];
    }
    if(arr[i]<mini)
    {
        mini=arr[i];
    }
    find(arr,++i,maxi,mini);
    return maxi,mini;
}
int main()
{
    int arr[]={1,8,2,3,5};
    int i=0;
    int maxi=INT16_MIN;
    int mini=INT16_MAX;
    find(arr,i,maxi,mini);
    cout<<maxi<<endl<<mini<<endl;
    return 0;
}