#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main()
{
    string str="zarcaazrd";
    queue<char>q;
    int counts[26]={0};
    string ans="";
// cout<<"xjdjdjdd";

    for(int i=0;i<str.size();i++)
    {
char ch=str[i];
counts[ch-'a']+=1;
q.push(ch);
while(!q.empty())
{
    if(counts[q.front()-'a']>1)
    {
        q.pop();
    }
    else{
        ans.push_back(q.front());
        break;
    }
}
if(q.empty())
{
    ans.push_back('#');
}


    }
    cout<<"final ans is:"<<ans;

}