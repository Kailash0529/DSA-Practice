#include<iostream>
#include<stack>
#include<vector>
#include <limits>

using namespace std;
vector<int> nextmin(vector<int> &v)

{
    stack<int> s;
    s.push(-1);

    vector<int> ans(v.size());
    for(int i=v.size()-1;i>=0;i--)
{
    int el=v[i];
    while(s.top()!=-1&&el<=v[s.top()])
    {
        s.pop();

    }
   
        ans[i]=s.top();
         if(ans[i]==-1)
 {
    ans[i]=v.size();
 }   
        s.push(i);

}
// cout<<"hello";
// for(int i=0;i<ans.size();i++)
// {
//     cout<<ans[i]<<" ";
// }
return ans;
}
vector<int> prevmin(vector<int> &v)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(v.size());
    for(int i=0;i<v.size();i++)
    {
int el=v[i];
while(s.top()!=-1&&el<=v[s.top()])
{
    s.pop();
}
ans[i]=s.top();
s.push(i);
    }
// for(int i=0;i<ans.size();i++)
// {
//     cout<<ans[i]<< " ";
// }
return ans;
}

void rectarea(vector<int> &heights)
{
    vector<int>prev=prevmin(heights);
    vector<int>next=nextmin(heights);
    int area=INT16_MIN;
    for(int i=0;i<heights.size();i++)
    {

        int length=heights[i];
        int width=next[i]-prev[i]-1;
        int a=length*width;
        area=max(area,a);
    }
    cout<<area<<endl;
}
int main()
{
vector<int> v;
v.push_back(2);
v.push_back(1);
v.push_back(5);
v.push_back(6);
v.push_back(2);
v.push_back(3);

stack<int> s;
s.push(-1);  
vector<int> ans(v.size());
// nextmin(v);
rectarea(v);
// prevmin(v);

}