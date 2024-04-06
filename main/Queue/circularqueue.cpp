#include<iostream>
using namespace std;
class queue{
    public:
    int size;
    int* arr;
    int front;
    int rear;
    queue(int size)
    {
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void push(int data)
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
    void pop()
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
    int getfront()
    {

         if(front==-1)
        {
            cout<<"underflow"<<endl;
        }
        else{
            return arr[front];
        }
    }
};
int main()
{
    queue q(10);
    q.push(10);
    q.push(11);
    q.push(10);
    q.push(9);
    q.push(10);
    q.push(10);
    q.push(10);
    q.push(10);
    q.push(10);
    q.push(10);
    q.pop();
    q.pop();
    q.pop();
    q.push(1);
    q.push(2);
    q.push(3);
    
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    
   cout<<q.getfront();
    

}