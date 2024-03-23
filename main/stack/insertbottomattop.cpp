#include<iostream>
#include<stack>
using namespace std;
void doo(stack<int> &s,int target)
{
if(s.empty())
{
    s.push(target);
return;
}
int topelement=s.top();
s.pop();
doo(s,target);
s.push(topelement);

}
int main()
{
stack<int> s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
s.push(70);
int target=s.top();
s.pop();
doo(s,target);
while(!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}
}