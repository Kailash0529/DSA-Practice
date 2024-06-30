#include<iostream>
using namespace std;
int main(){
    int arr[]={55,4,8,2,33,47,800,-1,444,10,20,30,60,69};
    int n=14,min=1000000000,max=-1;
//     for(int i=0;i<n;i++)
//     {
// if(arr[i]<min)

// {
//     min=arr[i];
// }
// if(arr[i]>max)
// {
//     max=arr[i];
// }

//     }

for(int i=0;i<n;i++)
{

    if(arr[i+1]>arr[i])
    {
        if(arr[i+1]>max)max=arr[i+1];
        if(arr[i]<min)min=arr[i];
    }
    else{
          if(arr[i]>max)max=arr[i];
        if(arr[i+1]<min)min=arr[i+1];
    }
}
    cout<<min<<" "<<max<<endl;
}