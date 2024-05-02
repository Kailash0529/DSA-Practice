#include<iostream>
#include<queue>
using namespace std;
class info{
public:
 int data;
 int row;
 int col;
 info(int d,int r,int c)
 {
data=d;
row=r;
col=c;
 }
};
class compare{
public:
bool operator()(info* a,info* b)
{
    return a->data>b->data;
}

};
vector<int> merge(int arr[][4],int r,int c)
{
    priority_queue<info*,vector<info*>,compare>minheap;
    for(int i=0;i<r;i++)
    {
        info* temp=new info(arr[i][0],i,0);
        minheap.push(temp);
    }
    vector<int>ans;
    while(!minheap.empty())
    {
        info* ele=minheap.top();
    int datas=ele->data;
    int row=ele->row;
    int col=ele->col;
    ans.push_back(datas);
    minheap.pop();
    if(col+1<c)
    {
        info* newinfo=new info(arr[row][col+1],row,col+1);
        minheap.push(newinfo);

    }
    }
    return ans;
} 
int main()
{
int arr[][4]={{1,4,7,10},{2,5,8,11},{3,6,9,12}};
int r=3;
int c=4;
vector<int>ans=merge(arr,r,c);
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<" ";
}
}