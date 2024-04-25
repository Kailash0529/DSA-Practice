class Solution{
    public:
    
    void find(int in[], map<int,int> &nodeindex,int n)
    {
        for(int i=0;i<n;i++)
        
        {
            nodeindex[in[i]]=i;
        }
    }
    Node* solve(int in[],int pre[],int &pindex,int instart,int inend,map<int,int> &nodeindex,int n)
    {
        if(pindex>=n||instart>inend)
        {
            return NULL;
        }
        int ele=pre[pindex++];
        Node* root=new Node(ele);
        int pos=nodeindex[ele];
        root->left=solve(in,pre,pindex,instart,pos-1,nodeindex,n);
         root->right=solve(in,pre,pindex,pos+1,inend,nodeindex,n);
         return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        map<int,int> nodeindex;
        int preindex=0;
     
        
        find(in,nodeindex,n);
        Node* root=solve(in,pre,preindex,0,n-1,nodeindex,n);
        return root;
        
    }
};