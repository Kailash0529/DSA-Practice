#include<iostream>
#include<stack>
using namespace std;
void insertinsorted(stack<int>&s,int &target)
{
    if(s.empty())
    {
        s.push(target);
        return;
    }
    if(target<=s.top())
    {
        s.push(target);
        return;
    }
    int topele=s.top();
    s.pop();
    insertinsorted(s,target);
    s.push(topele);
    
    
}
void sort(stack<int>&s)
{
    if(s.empty())return;
    int target=s.top();
    s.pop();
    sort(s);
    insertinsorted(s,target);
}
int main()
{
      stack <int> s;
s.push(10);
s.push(20);
s.push(50);
s.push(40);
s.push(110);
s.push(60);
s.push(80);
sort(s);
while(!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}
}