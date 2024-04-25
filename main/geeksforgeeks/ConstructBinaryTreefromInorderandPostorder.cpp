class Solution
{
    public:
    void find(int in[], map<int,int> &m,int n)
    {
        for(int i=0;i<n;i++)
        {
            m[in[i]]=i;
        }
    }
    Node* solve(int in[],int post[],int &index,int instart,int inend, map<int,int> &m,int n)
    {
        if(index<0||instart>inend)
        {
            return NULL;
        }
        int ele=post[index--];
        Node* root=new Node(ele);
        int pos=m[ele];
        root->right=solve(in,post,index,pos+1,inend,m,n);
        root->left=solve(in,post,index,instart,pos-1,m,n);
        return root;
    }

    //Function to return a tree created from postorder and inoreder traversals.
    Node *buildTree(int in[], int post[], int n) {
        // Your code here
        int pindex=n-1;
        map<int,int> m;
        find(in,m,n);
       Node* root= solve(in,post,pindex,0,n-1,m,n);
       return root;
    }
};