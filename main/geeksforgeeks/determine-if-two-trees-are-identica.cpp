class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        if(r1==nullptr&&r2==nullptr)
        {
            return true;
        }
        else if(r1!=nullptr&&r2==nullptr)
        {
            return false;
        }
         else if(r1==nullptr&&r2!=nullptr)
        {
            return false;
        }
        bool left=isIdentical(r1->left,r2->left);
        bool right=isIdentical(r1->right,r2->right);
        bool cmp=r1->data==r2->data;
        if(left&&right&&cmp)
        {
            return true;
        }
        else{
            return false;
        }
    }
};