#include<iostream>
#include<queue>
using namespace std;
void find(int arr[],int n,int k)
{
    queue<int>q;
    for(int i=0;i<k;i++)
    {
if(arr[i]<=0)
{
q.push(i);
}
    }
    for(int i=k;i<n;i++)
    {
        if(q.empty())
        {
            cout<<"0"<<endl;
        }
        else{
            cout<<arr[q.front()]<<endl;
        }
        while(!q.empty()&&i-q.front()>=k)
        {
            q.pop();
        }
        if(arr[i]<=0)
        {
            q.push(i);
        }
    }
    if(q.empty())
    {
        cout<<"0"<<endl;
    }
    else{
        cout<<arr[q.front()]<<endl;
    }
}
int main()
{
  int arr[]={12,-1,-7,8,-15,30,16,28};
  int size=8;
    find(arr,size,2);
}
