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

int main()
{
    node* lefthead=new node(10);
    node* left2=new node(20);
    node* left3=new node(30);
    node* left4=new node(40);
lefthead->next=left2;
left2->next=left3;
left3->next=left4;
left4->next=NULL;
    node* righthead=new node(15);
    node* right2=new node(25);
    node* right3=new node(35);
    righthead->next=right2;
    right2->next=right3;
    right3->next=NULL;

    node* mptr=new node(-1);
    node* ans=mptr;
    node* a=lefthead;
    node* b=righthead;

    while(a&&b)
    {
        if(a->data<=b->data)
        {
            ans->next=a;
            ans=a;
            a=a->next;
        }
        else if(b->data<a->data)
        {
            ans->next=b;
            ans=b;
            b=b->next;
        }
    }
    if(b)
    {
        ans->next=b;
        b=b->next;
    }
    if(a)
    {

        ans->next=a;
        a=a->next;
    }
    node* mmptr=mptr->next;
    while(mmptr!=NULL)
    {
        cout<<mmptr->data<<" ";
        mmptr=mmptr->next;
    }

return 0;
}