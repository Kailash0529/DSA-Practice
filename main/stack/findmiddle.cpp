#include<iostream>
#include<stack>
using namespace std;
void reverse(stack<int> &s)
{
    cout<<s.top()<<" ";

    s.pop();
    reverse(s);
}
void findmiddle(stack<int> &s,int size)
{     
    if(s.size()==size/2+1)
    {
        cout<<s.top();
    }
    int temp=s.top();
    s.pop();
    findmiddle(s,size);
    s.push(temp);
}
int main()
{
    stack<int> s;
    s.push(10); 
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(90);
    s.push(50);
    s.push(60);
    s.push(70);
    // reverse(s);
    findmiddle(s,s.size());
    }