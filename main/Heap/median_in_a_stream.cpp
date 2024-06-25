#include<iostream>
#include<queue>
using namespace std;
class compare{
public:
bool operator()(int a,int b)
{
    return a>b;
}
};
float solve( priority_queue<int>maxheap, priority_queue<int,vector<int>,compare>minheap,float m,int arr[])
{
    for(int i=0;i<11;i++)
    {
int ele=arr[i];
if(maxheap.size()==minheap.size())
{
    if(ele>m)
    {
        minheap.push(ele);
        m=minheap.top();
    }
    else if(ele<m)
    {
        maxheap.push(ele);
        m=maxheap.top();
    }
}
else{
    if(maxheap.size()>minheap.size())
    {
        if(ele>m)
        {
            minheap.push(ele);
            m=(minheap.top()+maxheap.top())/2;
        }
        else if(ele<m)
        {
            int alter=maxheap.top();
            maxheap.pop();
            minheap.push(alter);
            maxheap.push(ele);
            m=(minheap.top()+maxheap.top())/2;



        }
    }
    else if(maxheap.size()<minheap.size())
    {
        if(ele<m)
        {

            maxheap.push(ele);
            m=(minheap.top()+maxheap.top())/2;    
        }
        else if(ele>m)
        {
            int alter=minheap.top();
            minheap.pop();
            maxheap.push(alter);
            minheap.push(ele);
            m=(minheap.top()+maxheap.top())/2;
        }
    }
}
    }
    return m;
}
int main()
{
    int arr[]={4,8,9,2,7,15,3,20,6,13,14};
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,compare>minheap;
    float m=0;
   cout<< solve(maxheap,minheap,m,arr);


}