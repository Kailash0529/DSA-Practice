/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void solve(TreeNode* root,int targetSum,vector<int>path,  vector<vector<int>>&ans,int currsum)
{
    if(root==nullptr)
    {
        return;
    }
    else if(root->left==nullptr&&root->right==nullptr)
    {
        currsum+=root->val;
        path.push_back(root->val);
        if(currsum==targetSum)
        {
            ans.push_back(path);
        }
        return;
    }
    path.push_back(root->val);
    currsum+=root->val;
    solve(root->left,targetSum,path,ans,currsum);
     solve(root->right,targetSum,path,ans,currsum);

}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        vector<vector<int>>ans;
        int currsum=0;
        solve(root,targetSum,path,ans,currsum);
        return ans;
    }
};