#include<iostream>
using namespace std;
class node{
public:
string data;
node* a[26];
bool isterminal;
node(char d)
{
data=d;
for(int i=0;i<25;i++)
{
    a[i]=NULL;
}
isterminal=false;
}

};
void insert(node* root,string data)
{
if(data.length()==0)
{
    root->isterminal=true;
    return;
}
char ch=data[0];
int index=ch-'a';
node* child;
if(root->a[index]!=NULL)
{
child=root->a[index];
}
else{
    child=new node(ch);
    root->a[index]=child;
}
insert(child,data.substr(1));
}
bool searchs(node* root,string data)
{
if(data.length()==0)
{
    return root->isterminal;
}
char ch=data[0];
int index=ch-'a';
node* child;
if(root->a[index]!=NULL)
{
    child=root->a[index];
}
else{
    return false;
}
return searchs(child,data.substr(1));
}
int main()
{

node* s=new node('_');
insert(s,"kailas");
cout<<searchs(s,"kailas")<<" ";
}