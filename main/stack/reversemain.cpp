#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack <int> &s,int target)
{
    if(s.empty())
    {
        s.push(target);
        return;
    }
    int topele=s.top();
    s.pop();
    insertatbottom(s,target);
    s.push(topele);
}
void reverse(stack <int> &s)
{
    if(s.empty())return;
    int target=s.top();
    s.pop();
    reverse(s);
    insertatbottom(s,target);
}
int main()
{
    stack <int> s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
s.push(70);
reverse(s);
while(!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}
}