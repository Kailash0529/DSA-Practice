#include<iostream>
using namespace std;
class stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;
    stack(int size)
    {
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }
    void push1(int data)
    {
        if(top2-top1==1)
        {
            cout<<"stack1 overflow "<<endl;
        }
        else{
            arr[top1]=data;
            top1++;
            cout<<"successfully pushed in first stack"<<endl;

        }
    }
    void push2(int data)

    {
        if(top2-top1==1)
        {
            cout<<"stack2 overflow"<<endl;
        }
        else{
            arr[top2]=data;
            top2--;
            cout<<"successfully pushed in second stack"<<endl;
        }
    }
    void pop1()
    {
        if(top1==-1)
        {
            cout<<"stack underflow"<<endl;
        }
        else{
            top1--;
            cout<<"successfully popped and latest top is:"<<arr[top1]<<endl;
        }
    }
    void pop2()
    {
        if(top2==size)
        {
            cout<<"stack underflow"<<endl;
        }
        else{
            top2++;
            cout<<"successfully popped and latest top is:"<<arr[top2]<<endl;
            
        }
    }
};
int main()
{

    stack s(10);

    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push2(10);
    s.push2(10);
    s.push2(10);
    s.push2(10);
    s.push1(10);
    s.push2(10);





}