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
node* reverse(node* &head)
{
    node* prev=NULL;
    node* curr=head;
    node* forward=curr->next;
    while(forward!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
bool ispalindrome(node* &head)
{
    if(head==NULL)
    {
        return false;
    }
    if(head->next==NULL)
    {
        return true;
    }
    node* slow=head;
    node* fast=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }
    // node* temp=slow->next;
    // cout<<slow->data;
    node* reversekahead=reverse(slow->next);
    
    // cout<<reversekahead->next->data;
    node* temp1=head;
    node* temp2=reversekahead;
    while(temp2!=NULL)
    {  
         if(temp1->data!=temp2->data)
    {
        return false;
    }
        temp1=temp1->next;
        temp2=temp2->next;
       
    }
    return true;
}
int main()
{
node* head=new node(20);
node* second=new node(30);

node* third=new node(20);

node* fourth=new node(50);
node* fifth=new node(20);
node* sixth=new node(30);
node* tail=new node(20);
head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=sixth;
sixth->next=tail;
tail->next=NULL;
cout<<ispalindrome(head);

}
