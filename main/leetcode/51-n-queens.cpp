class Solution {
public:
unordered_map<int,bool>rowcheck;
unordered_map<int,bool>ul;
unordered_map<int,bool>br;
void storeall( vector<vector<char>>&board,int n, vector<vector<string>>&ans)
{
    vector<string>temp;
    for(int i=0;i<n;i++)
    {
        string output="";
        for(int j=0;j<n;j++)
        {
            output.push_back(board[i][j]);
        }
        temp.push_back(output);
        // cout<<endl;
    }
    ans.push_back(temp);
    cout<<endl;
}
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
void find( vector<vector<char>>&board,int n,int col, vector<vector<string>>&ans)
{
//basecase
if(col>=n)
{
    storeall(board,n,ans);
}
//ek case solve karlo
for(int row=0;row<n;row++)
{
    if(issafe(row,col,board,n))
    {
        board[row][col]='Q';
        rowcheck[row]=true;
        ul[n-1+row-col]=true;
        br[row+col]=true;
        find(board,n,col+1,ans);
        board[row][col]='.';
         rowcheck[row]=false;
        ul[n-1+row-col]=false;
        br[row+col]=false;
    }
}
}
    vector<vector<string>> solveNQueens(int n) {
         vector<vector<char>>board(n,vector<char>(n,'.'));
         vector<vector<string>>ans;
    int col=0;
    find(board,n,col,ans);
    return ans;
    }
};