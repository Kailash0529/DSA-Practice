class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=0;

        if(r!=0)
        {
            c=matrix[0].size();
        }
        vector<int>rowmark(r,0);

        vector<int>colmark(c,0);
        for(int i=0;i<r;i++)

        {
            for(int j=0;j<c;j++)

            {

                if(matrix[i][j]==0)
                {
                    rowmark[i]=1;
                    colmark[j]=1;;
                }
            }
        }
        for(int i=0;i<r;i++)

        {
            if(rowmark[i]!=0)
            {
for(int j=0;j<c;j++)
{
    matrix[i][j]=0;
}
            }
        }
        for(int i=0;i<c;i++)
        {
            if(colmark[i]!=0)

            {
                for(int k=0;k<r;k++)
                {
                    matrix[k][i]=0;
                }
            }
        }

    }
};