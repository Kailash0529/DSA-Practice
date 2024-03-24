#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
vector<int> v;
v.push_back(10);
v.push_back(4);
v.push_back(10);
v.push_back(3);
v.push_back(2);
stack<int> s;
s.push(-1);
vector<int> ans(v.size());
for(int i=v.size()-1;i>=0;i--)
{
    int el=v[i];
    while(el<=s.top())
    {
        s.pop();

    }
    
        ans[i]=s.top();
        s.push(el);

}
// cout<<"hello";
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}

}