#include<iostream>
#include<queue>
using namespace std;
class tree{
public:
int data;
tree* left;
tree* right;
tree(int data)
{
    this->data=data;
    this->left=nullptr;
    this->right=nullptr;
}
};
tree* build(tree* root,int data)
{
    if(root==nullptr)
    {
        root=new tree(data);
    }
    else if(root->data>data)
    {
       root->left= build(root->left,data);
    }
    else{
        root->right=build(root->right,data);
    }
    return root;
}
void takeinput(tree* &root)
{
int data;
cin>>data;
while(data!=-1)
{
   root= build(root,data);
   cin>>data;
}
}
void levelordertraversal(tree* root)
{
queue<tree*>q;
q.push(root);
q.push(nullptr);
while(!q.empty())
{
    tree* temp=q.front();
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
void inordertraversal(tree* root)
{
    //basecase
    if(root==nullptr)
    {
        return;
    }
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}
void preordertraversal(tree* root)
{
    //basecase
    if(root==nullptr)
    {
        return;
    }
    cout<<root->data<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
    
}
void postordertraversal(tree* root)
{
    //basecase
    if(root==nullptr)
    {
        return;
    }
    postordertraversal(root->left);
    postordertraversal(root->right);
     cout<<root->data<<" ";
}
tree* search(tree* root,int target)
{
 if(root==nullptr)return NULL;
 if(root->data==target)return root;
 else if(root->data>target)
 {
    return search(root->left,target);
 }
 else if(root->data<target)
 {
     return search(root->right,target);
 }
}
int minval(tree* root)
{
    tree* temp=root;
    if(temp==nullptr)
    {
        return -1;
    }
    while(temp->left!=nullptr)
    {
        temp=temp->left;
    }
    return temp->data;
}
int maxval(tree* root)
{
    tree* temp=root;
    if(temp==nullptr)
    {
        return -1;
    }
    while(temp->right!=nullptr)
    {
        temp=temp->right;
    }
    return temp->data;
}
tree* deletes(tree* root,int key)
{
  if(root==NULL)
  {
      return NULL;
  }
  if(root->data==key)
  {
      if(root->left==NULL&&root->right==NULL)
      {
          return NULL;
      }
      else if(root->left==NULL&&root->right!=NULL)
      {
          tree* child=root->right;
          return child;
      }
      else if(root->left!=NULL&&root->right==NULL)
      {
          tree* child=root->left;
          return child;
      }
      else{
          int inorderpre=maxval(root->left);
          root->data=inorderpre;
          root->left=deletes(root->left,inorderpre);
          return root;
      }
  }
  else if(key>root->data)
  {
      root->right=deletes(root->right,key);
  }
  else if(key<root->data)
  {
      root->left=deletes(root->left,key);
  }
  return root;
}
tree* BSTusinginorder(int inorder[],int s,int e)
{
    if(s>e)
    {
        return NULL;
    }
    int m=(s+e)/2;
    int ele=inorder[m];
    tree* root=new tree(ele);
    root->left=BSTusinginorder(inorder,s,m-1);
    root->right=BSTusinginorder(inorder,m+1,e);
    return root;
}
int main()
{
    tree* root=nullptr;
    int inorder[]={10,20,80,85,91,93,99,100};
    int s=0;
    int e=7;
    root=BSTusinginorder(inorder,s,e);

    // takeinput(root);/
    
    
//   cout<<"inordertraversal"<<endl;
    inordertraversal(root);
//   cout<<"preordertraversal"<<endl;
//     preordertraversal(root);
//   cout<<"postordertraversal"<<endl;
//     postordertraversal(root);
//     cout<<search(root,15); 
//     cout<<"minvalue is"<<minval(root);
// root=deletes(root,3);
// levelordertraversal(root);
}