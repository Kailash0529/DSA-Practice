#include<iostream>
using namespace std;
void kailash(int *arr,int n)
    {
        for(int i=0;i<n;i++)
        {
            int index=abs(arr[i]);
            if(arr[index-1]>0)
            {
            arr[index-1]*=-1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                cout<<"the missing number in the given array is" <<i+1<<endl;
            }
        }
    }
int main()
{
    int n;
    int arr[]={1,2,2,4,5};
    n=sizeof(arr)/sizeof(int);
    kailash(arr,n);
    return 0;
    
}