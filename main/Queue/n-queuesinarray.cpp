#include<iostream>
using namespace std;
class queue{
    public:
    int n,k,freespot;
    int* arr;
    int *front;
    int* rear;
    int* next;
    queue(int _n,int _k):n(_n),k(_k),freespot(0){
arr=new int[n];
next=new int[n];
front =new int[k];
rear=new int[k];
for(int i=0;i<k;i++)
{
front[i]=-1;
rear[i]=-1;
}
for(int i=0;i<n;i++)
{
next[i]=i+1;
next[n-1]=-1;
}
    }
    bool push(int x,int q)
    {
        int index=freespot;
        freespot=next[index];
        if(freespot==-1)return false;
        if(front[q]==-1)
        {
            front[q]=index;
        }
        else{
            next[rear[q]]=index;
        }
        next[index]=-1;
        rear[q]=index;
        arr[index]=x;
        // cout<<arr[2]<<endl;
        return true;
    }
    bool pop(int q)
    {
        if(front[q]==-1)return false;
        int index=front[q];
        arr[index]=-1;
        front[q]=next[index];
        next[index]=freespot;
        freespot=index;
        cout<<arr[front[q]]<<endl;
        return true;


    }
};
int main()
{
queue q(10,2);
q.push(10,1);
q.push(11,1);
q.push(101,1);
q.pop(1);
q.pop(1);
    return 0;
}