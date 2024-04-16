class Solution{
    public:
    pair<int,int>find(Node* root)
    {
        if(root==nullptr)
        {
pair<bool,int>p=make_pair(true,0);
            return p;
        }
        pair<bool,int>left=find(root->left);
        pair<bool,int>right=find(root->right);
        bool leftb=left.first;
        bool rightb=right.first;
        bool diff=abs(left.second-right.second)<=1;
        pair<bool,int>ans;
        ans.second=max(left.second,right.second)+1;
        if(leftb&&rightb&&diff)
        {
            ans.first=true;
        }
        else{
            ans.first=false;
        }
        return ans;
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        return find(root).first;
        
        
    }
};