#include<iostream>
#include<vector>
using namespace std;
bool issafe(int i,int j,int row,int col,int arr[3][3],vector<vector<bool>> &visited)
{
    if(((i>=0&&i<row)&&(j>=0&&j<col))&&(visited[i][j]==false)&&(arr[i][j]==1))
    {
        return true;
    }
    else{return false;}
}
void find(int arr[3][3],int row,int col,int i,int j,vector<vector<bool>> &visited,vector<string> &path,string output)
{
//basecase
if(i==row-1&&j==col-1){
path.push_back(output);
return;}

if(issafe(i+1,j,row,col,arr,visited))
{
    visited[i+1][j]=true;
    find(arr,row,col,i+1,j,visited,path,output+'D');
    visited[i+1][j]=false;
}
if(issafe(i,j-1,row,col,arr,visited))
{
    visited[i][j-1]=true;
    find(arr,row,col,i,j-1,visited,path,output+'L');
    visited[i][j-1]=false;
}
if(issafe(i-1,j,row,col,arr,visited))
{
    visited[i-1][j]=true;
    find(arr,row,col,i-1,j,visited,path,output+'U');
    visited[i-1][j]=false;
}
if(issafe(i,j+1,row,col,arr,visited))
{
    visited[i][j+1]=true;
    find(arr,row,col,i,j+1,visited,path,output+'R');
    visited[i][j+1]=false;
}


}

int main()
{
    int arr[3][3]={{1,0,0},
                   {1,1,0},
                   {1,1,0}};
    int row=3,col=3;
    vector<vector<bool>>visited(row,vector<bool>(col,false));
    vector<string>path;
    string output="";
    find(arr,row,col,0,0,visited,path,output);
    if(path.size()==0)cout<<"no path exists"<<endl;
    if(arr[row][col]==0)cout<<"no path exists";
    for(auto i:path)
    {
        cout<<i<<endl;
    }
}