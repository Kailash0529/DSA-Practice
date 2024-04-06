#include<iostream>
using namespace std;
class queue{
    public:
    int *arr;
int front,rear;
int size;
queue(int size)
{
    this->size=size;
    arr=new int[size];
    front=0;
    rear=0;
   
}
 void push(int data)
    {
        if(rear==size)
        {
            cout<<"overflow"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void pop()
    {
        if(front==rear)
        {
            cout<<"empty queue"<<endl;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear)
            {
                front=rear=0;
            }
        }
    }
    int getfront()
    {
if(front==rear)
{
    cout<<"empty queue"<<endl;
    return -1;
}
else{
    return arr[front];
}

    }
    int getsize()
    {
        return rear-front;
    }
};
int main()
{
     queue q(10);
     q.push(9);
     q.push(10);
     q.pop();
     q.pop();
     q.push(11);
     q.push(10);
     q.push(10);
     q.push(10);
     q.push(10);
     q.push(10);
     q.push(10);
     q.push(10);
     q.push(10);
     q.push(10);
     q.push(10);




     cout<<q.getfront();
     cout<<q. getsize();
}