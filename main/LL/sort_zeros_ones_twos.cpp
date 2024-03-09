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
void sortthelist(node* &head)
{
    if(head==NULL)
    {
        return;
    }
    node* temp=head;
    int zero=0;
    int one=0;
    int two=0;
    while(temp!=NULL)
    {
        if(temp->data==0)zero++;
        else if(temp->data==1)one++;
        else if(temp->data==2)two++;
        temp=temp->next;

    }
    temp=head;
    while(zero--)
    {
        temp->data=0;
        temp=temp->next;
    }
      while(one--)
    {
        temp->data=1;
        temp=temp->next;
    }
  while(two--)
    {
        temp->data=2;
        temp=temp->next;
    }



}
node* sortthelist2(node* &head)
{
    node* zerohead=new node(-1);
    node* zerotail=zerohead;

    node* onehead=new node(-1);
    node* onetail=onehead;

    node* twohead=new node(-1);
    node* twotail=twohead;

    node* curr=head;
    while(curr!=NULL)
    {
        if(curr->data==0)
        {
            node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            zerotail->next=temp;
            zerotail=temp;
        }
        else if(curr->data==1)
        {
            node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

        onetail->next=temp;
        onetail=temp;

        }
        else if(curr->data==2)
        {
            node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

        twotail->next=temp;
        twotail=temp;

        }

    
    }
    node* temp=onehead;
        onehead=onehead->next;
        temp->next=NULL;
        delete temp;

        temp=twohead;
        twohead=twohead->next;
        temp->next=NULL;
        delete temp;

        //connecting nodes
        if(onehead!=NULL)
        {
            zerotail->next=onehead->next;
            if(twohead!=NULL)
            {
                onetail->next=twohead->next;
            }
        }
        else if(twohead!=NULL)
        {
            zerotail->next=twohead->next;
        }
       temp=zerohead;
        zerohead=zerohead->next;
        temp->next=NULL;
        delete temp;

       
     
        return zerohead;
}
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

int main()
{
node* head=new node(0);
node* second=new node(1);

node* third=new node(1);

node* fourth=new node(2);
node* fifth=new node(2);
node* sixth=new node(1);
node* tail=new node(2);
head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=sixth;
sixth->next=tail;
tail->next=NULL;
// sortthelist(head);
head=sortthelist2(head);

printlist(head);
}