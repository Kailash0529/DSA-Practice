#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
unordered_map<int,bool>rowcheck;
unordered_map<int,bool>ul;
unordered_map<int,bool>br;
bool issafe(int row,int col,vector<vector<char>>&board,int n)
{
    // int i=row,j=col;
    // while(j>=0)
    // {
    //     if(board[i][j]=='Q')return false;
    //     j--;
    // }
    // i=row,j=col;
    // while(i>=0&&j>=0)
    // {
    //     if(board[i][j]=='Q')return false;
    //     i--,j--;
    // }
    // i=row,j=col;
    // while(i<n&&j>=0)
    // {
    //     if(board[i][j]=='Q')return false;
    //     i++,j--;
    // }
    // return true;
    if(rowcheck[row]==true)return false;
    if(ul[n-1+row-col]==true)return false;
    if(br[row+col]==true)return false;
    return true;
}
void printall( vector<vector<char>>&board,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void find( vector<vector<char>>&board,int n,int col)
{
//basecase
if(col>=n)
{
    printall(board,n);
}
//ek case solve karlo
f
or(int row=0;row<n;row++)
{
    if(issafe(row,col,board,n))
    {
        board[row][col]='Q';
        rowcheck[row]=true;
        ul[n-1+row-col]=true;
        br[row+col]=true;
        find(board,n,col+1);
        board[row][col]='-';
         rowcheck[row]=false;
        ul[n-1+row-col]=false;
        br[row+col]=false;
    }
}
}
int main()
{
    int n=5;
    vector<vector<char>>board(n,vector<char>(n,'-'));
    int col=0;
    find(board,n,col);

}