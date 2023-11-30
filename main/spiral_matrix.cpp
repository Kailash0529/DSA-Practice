#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> ans;
    vector<vector<int>>k{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int i,m,n;
    m=k.size();
    n=k[0].size();
    int colstart=0;
    int colend=n-1;
    int rowend=m-1;
    int rowstart=0;
    int total=m*n;
    int count=0;
    while(count<total)
    {
        for(int i=colstart;i<=colend&& count<total;i++)
    {
ans.push_back(k[rowstart][i]);
count++;
    }
    rowstart++;
    for(int i=rowstart;i<=rowend;i++)
    {
ans.push_back(k[i][colend]);
count++;
    }
    colend--;
    for(int i=colend;i>=colstart;i--)
    {
ans.push_back(k[rowend][i]);
count++;
    }
    rowend--;
    for(int i=rowend;i>=rowstart;i--)
    {
ans.push_back(k[i][colstart]);
count++;
    }
    colstart++;
    }
    for (int element : ans) {
        cout << element << " ";
    }



}