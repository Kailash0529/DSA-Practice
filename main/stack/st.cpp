#include<iostream>
using namespace std;
class st{
    public:
    int *arr;
    int top;
    int size;
    st(int size)
    {
        arr=new int[size];
        this->size=size;
        top=-1;
    }
    void push(int data)
    {
if(size-top<2)
{
    cout<<"stackoverflow";
}
else{
    top++;
    arr[top]=data;      
    cout<<"pushed successfully";
}

    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"underflow";
        }
        else{
            cout<<arr[top]<<"popped successfully";
            top--;
            cout<<arr[top]<<":Is the top after popped ";

        }
    }
};
int main()
{
st s(5);
s.push(10);
s.push(10);
s.push(10);
s.push(10);
s.push(20);

s.pop();
s.push(20);
s.push(20);



}