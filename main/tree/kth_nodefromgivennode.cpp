// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
class node{

    public:
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data=data;
        left=nullptr;
        right=nullptr;
    }
};
bool kthnode(node* root,int &k,int v)
{
    if(root==nullptr)
    {
        return false;
    }
    else if(root->data==v)
    {
        return true;
    }
    bool left=kthnode(root->left,k,v);
    bool right=kthnode(root->right,k,v);
    if(left||right)
    {
        k--; 
    }
    if(k==0)
    {
        cout<<root->data<<":is the kth node"<<endl;
        k=-1;
        return left||right;
    }

}
node* build(node* root)
{
    int data;
cout<<"enter data"<<endl;
cin>>data;
root=new node(data);
if(data==-1)return nullptr;
cout<<"enter the left node for "<<data<<endl;

root->left=build(root->left);
cout<<"enter the right node for"<<data;

root->right=build(root->right);
return root;
}
int main()
{
node* root=nullptr;
root=build(root);
int k=2;
int v=14;
bool kth=kthnode(root,k,v);
return 0;
}