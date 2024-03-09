#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node()
    {
        this->data=0;
        this->next=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    
};
void posfromtail(node* head,int &pos,int &ans)
{
    if(head==NULL)
    {
        
        return;
    }
   
posfromtail(head->next,pos,ans);
    
    if(pos==0)
    {
        ans=head->data;
        // return;
    }
    pos--;


}
int main()
{
    node* head=new node(10);
    node* first=new node(20);
    node* second=new node(30);
    node* tail=new node(40);
    head->next=first;
    first->next=second;
    second->next=tail;
    tail->next=NULL;
    int pos=0;
    int ans=-1;
    posfromtail(head,pos,ans);
    cout<<ans;
}