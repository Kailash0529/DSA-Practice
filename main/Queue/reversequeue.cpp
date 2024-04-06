#include<iostream>
#include<queue>
#include<stack>

using namespace std;
void reverse(queue<int>&q)
{
    if(q.empty())
    {
        return;
    }
    int ele=q.front();
    q.pop();
    reverse(q);
    q.push(ele);

}
void reversek(queue<int>&q,int n)
{
    int s=q.size();
    if(n<=0||n>s)
    {
        return;
    }
    stack<int> st;
    int c=0;
    while(!q.empty())
    {
int ele=q.front();
q.pop();
st.push(ele);
c++;
if(c==n)
{
    break;
}
    }
    while(!st.empty())
    {
        int ele=st.top();
        st.pop();
        q.push(ele);

    }
    c=s-n;
    while(c--)
    {
        int ele=q.front();
        q.pop();
        q.push(ele);
    }
}
void interleavequeue(queue<int>&q)
{
    cout<<"interleavequeue_is:"<<endl;
    if(q.empty())
    {
        return;
    }
    queue<int>r;
    int n=q.size();
    int c=0;
    while(!q.empty())
    {
        int ele=q.front();
        q.pop();
        r.push(ele);
        c++;
        if(c==n/2)break;
    }
    while(!q.empty()&&!r.empty())
    {
int first=r.front();
r.pop();
q.push(first);
int second=q.front();
q.pop();
q.push(second);

    }
    if(!q.empty())
    {
        int ele=q.front();
        q.pop();
        q.push(ele);
    }


}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    // reverse(q);
    // reversek(q,5);ṇ
    interleavequeue(q);
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

}