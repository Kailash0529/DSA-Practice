#include<iostream>
using namespace std;
class dequeue{
public:
int size;
int* arr;
int front;
int rear;
dequeue(int size)
{
    this->size=size;
    arr=new int[size];
    int front=-1;
    int rear=-1;
}
void pushrear(int data)
{
     if((front==0&&rear==size-1)||(rear==front-1))
        {
            cout<<"overflow"<<endl;
        }
        // else if(rear==front-1)
        // {
        //     cout<<"overflow"<<endl;
        // }
        else if(rear==size-1&&front!=0)
        {
           
              rear=0;

             arr[rear]=data;
            cout<<arr[rear]<<endl;


            
           
        }

        else if(front==-1)
        {
            front=0;
            rear=0;
            arr[rear]=data;
            
            
        }
        else{
           
             rear++;

            arr[rear]=data;
            cout<<arr[rear]<<endl;
        }
}
void poprear()
{
    if(front==-1)
    {
        cout<<"underflow"<<endl;
    }
    else if(rear==front)
    {
        arr[rear]=-1;
        rear=-1;
        front=-1;

    }
    else if(rear==0)
    {
        arr[rear]=-1;
        rear=size-1;
    }
    else{
        arr[rear]=-1;
        rear--;
    }
}
void pushfront(int data)
{
    cout<<"pushing front"<<endl;
    if((front==0&&rear==size-1)||(rear==front-1))
    {
        cout<<"overflow"<<endl;
    }
    else if(front==-1)
    {
        front=0;
        rear=0;
        arr[front]=data;
    }
    else if(front==0&&rear!=size-1)
    {
        front=size-1;
        arr[front]=data;
    }
    else{
        front--;
        arr[front]=data;
    }
}
void popfront()
{
    
        if(front==-1)
        {
            cout<<"underflow"<<endl;
        }
       else if(front==rear)
        {
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(front==size-1)
        {
            arr[front]=-1;    
            front=0;
        } 
        else{
            arr[front]=-1;
            front++;
       
        }
    
}
void getsize()
{
    cout<<rear-front<<endl;
    cout<<"hello"<<endl;
}
};
int main()
{
    dequeue dq(10);
    dq.pushrear(10);
    dq.pushfront(20);
    dq.pushrear(10);
    dq.pushfront(20);
    dq.pushfront(20);
    dq.pushrear(10);
    dq.getsize();



}