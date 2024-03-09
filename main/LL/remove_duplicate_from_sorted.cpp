
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
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void printlist(node* &head)
{
    if(head==NULL)
    {
        cout<<"list is empty";
    }
    node* curr=head;
    while(curr!=NULL)
    {
cout<<curr->data;
curr=curr->next;
    }
}
void removedupli(node* &head)
{
if(head==NULL)
{
    cout<<"list is empty:";
}
node* curr=head;
while(curr!=NULL)
{
    if((curr->next!=NULL)&&curr->data==curr->next->data)
    {
        curr->next=curr->next->next;
    }
    else{
        curr=curr->next;
    }
}
}

int main()
{
node* head=new node(10);
node* second=new node(10);

node* third=new node(10);

node* fourth=new node(10);
node* fifth=new node(20);
node* sixth=new node(20);
node* tail=new node(30);
head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=sixth;
sixth->next=tail;
tail->next=NULL;
removedupli(head);
printlist(head);
}