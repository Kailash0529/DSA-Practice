// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>

using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }

};
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
void levelordertraversal(node* root)
{
queue<node*>q;
q.push(root);
q.push(nullptr);
while(!q.empty())
{
    node* temp=q.front();
    q.pop();
    if(temp==nullptr)
    {
        cout<<endl;
        if(!q.empty())
        {
            q.push(nullptr);
        }
    }
   else{
       cout<<temp->data;
        if(temp->left)
    {
        q.push(temp->left);
    }
    if(temp->right)
    {
        q.push(temp->right);
    }
   }
}

}
void inordertraversal(node* root)
{
    //basecase
    if(root==nullptr)
    {
        return;
    }
    inordertraversal(root->left);
    cout<<root->data;
    inordertraversal(root->right);
}
void preordertraversal(node* root)
{
    //basecase
    if(root==nullptr)
    {
        return;
    }
    cout<<root->data;
    preordertraversal(root->left);
    preordertraversal(root->right);
    
}
void postordertraversal(node* root)
{
    //basecase
    if(root==nullptr)
    {
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
     cout<<root->data;
}
void implementfromlevelorder(node* &root)
{
    queue<node*>q;
    cout<<"enter rootdata";
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        cout<<"enter left data for"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1)
        {
            temp->left=new node(leftdata);
            q.push(temp->left);
        }
        cout<<"enter rightdata for"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1)
        {
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
    }
}
int main()
{
node* root=nullptr;
// root=build(root);
implementfromlevelorder(root);
levelordertraversal(root);
inordertraversal(root);
preordertraversal(root);
postordertraversal(root);
}