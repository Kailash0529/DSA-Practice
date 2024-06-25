#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
class graph{
    public:
    unordered_map<int,list<int>>adj;
void makegraph(int u,int v,int directed)
{
adj[u].push_back(v);
if(directed==0)
{
    adj[v].push_back(u);
}
}
void printg()
{
    for(auto i:adj)
    {
        cout<<i.first<<"->";
        for(auto j:i.second)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
};
int main()
{
    graph g;
    int u,v,n,m;
    cout<<"enter the number of nodes:";
    cin>>n;
    cout<<"enter the number of edges";
    cin>>m;
    int directed=0; 
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
      g.makegraph(u,v,directed);

    }
    g.printg();

}