#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,9,8,7,6};

    int sum=0,actsum=0;
    int max=-1;
    int n=8;
    for(int i=0;i<n;i++)
{

    if(arr[i+1]>arr[i])
    {
        if(arr[i+1]>max)max=arr[i+1];
        // if(arr[i]<min)min=arr[i];
    }
    else{
          if(arr[i]>max)max=arr[i];
        // if(arr[i+1]<min)min=arr[i+1];
    }
}
for(int i=0;i<n;i++)

{
    actsum+=arr[i];
}
    for(int i=1;i<=max;i++){
        sum+=i;
    }
    cout<<sum-actsum<<endl;


}