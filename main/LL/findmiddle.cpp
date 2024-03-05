#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
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
    node* findmiddle(node* &head)
    {
        if(head==NULL)
        {
            cout<<"ll is empty"<<endl;
        }
        if(head->next==NULL)
        {
            return head;
        }
     node* slow=head;
     node* fast=head;
     while(slow!=NULL&&fast!=NULL)
     {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
     }
     return slow;
    }
    int findLength(node* &head)
    {
        int len=0;
        node* temp=head;
        while(temp!=NULL)
        {
            len++;

            temp=temp->next;
            // cout<<"length is"<<len;
        }
        // cout<<"length is:"<<len;
        return len;
    }
    node* reverseknodes(node* &head,int k)
    {
        if(head==NULL)
        {
            return head;
        }
        int len=findLength(head);
        if(k>len)
        {
            cout<<"enter a valid k value"<<endl;
        }
        if(k<=len)
        {
            node* prev=NULL;
 node* curr=head;
  node* forward=curr->next;
           int count=0;
           while(count<k)
           {

           
             forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
           } 
           if(forward!=NULL)
           {
            head->next=reverseknodes(forward,k);
           }
           return prev;
        }
        
    }
int main()
{
    node* head=new node(50);
    node* second=new node(40);
    node* third=new node(30);
    node* fourth=new node(50);
    node* fifth=new node(50);

  node* tail=new node(50);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=tail;
    tail->next=NULL;
    head=reverseknodes(head,4);
    print(head);
    // cout<<findmiddle(head)->data;
}