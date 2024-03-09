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
void print(node* &head)
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
node* reverse(node* &head)
{
    node* prev=NULL;
    node* curr=head;
    node* forward=curr->next;
    while(curr!=NULL)
    {
         forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
node* add(node* &head1,node* &head2)
{
    //reverse
    head1=reverse(head1);
    head2=reverse(head2);
    //add
    
    int c=0;
     node* newlisthead=NULL;
     node* newlisttail=NULL;
    while(head1!=NULL&&head2!=NULL)
    {
   

        int sum=head1->data+head2->data+c;
        int digit=sum%10;
        c=sum/10;
        node* newnode=new node(digit);
        if(newlisthead==NULL)
        {
            newlisthead=newnode;
            newlisttail=newnode;
        }
        else{
            newlisttail->next=newnode;
            newlisttail=newnode;
        }
        head1=head1->next;
        head2=head2->next;
    }
    while(head2!=NULL)
    {
         int sum=head2->data+c;
        int digit=sum%10;
        c=sum/10;
        node* newnode=new node(digit);
        newlisttail->next=newnode;
        newlisttail=newnode;
        head2=head2->next;
    }
    while(head1!=NULL)
    {
         int sum=head1->data+c;
        int digit=sum%10;
        c=sum/10;
        node* newnode=new node(digit);
        newlisttail->next=newnode;
        newlisttail=newnode;
        head1=head1->next;
    }
    while(c!=0)
    {
        int sum=c;
        int digit=sum%10;
        c=sum/10;
    }

    newlisthead=reverse(newlisthead);
    return newlisthead;
}
int main()
{
    node* head1=new node(2);
    node* second1=new node(4);
    head1->next=second1;

    node* head2=new node(2);
    node* second2=new node(3);
    node* third2=new node(4);
    head2->next=second2;
    second2->next=third2;
node* newhead=NULL;
    newhead=add(head1,head2);
    print(newhead);
}