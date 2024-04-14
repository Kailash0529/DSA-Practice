class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    pair<int,int>mydia(Node* root)
    {
        if(root==nullptr)
        {
            pair<int,int>p=make_pair(0,0);
            return p;
        }
        pair<int,int>left=mydia(root->left);
        pair<int,int>right=mydia(root->right);
        int l1=left.first;
        int l2=right.first;
        int l3=left.second+right.second+1;
        pair<int,int>ans;
        ans.first=max(l1,max(l2,l3));
        ans.second=max(left.second,right.second)+1;
        return ans;
    }
    int diameter(Node* root) {
        // Your code here
        pair<int,int>dia=mydia(root);
        return dia.first;
    }
};