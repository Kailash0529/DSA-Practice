#include<iostream>
using namespace std;
class node{
public:
int data;
node* prev;
node* next;
node()
{
    this->data=0;
    this->next=NULL;
    this->prev=NULL;
}
node(int data)
{
    this->data=data;
    this->prev=NULL;
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
cout<<endl;
} 

int getLength(node* &head)
{
    node* temp=head;
    int len=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}
void insertathead(node* &head,node* &tail,int data)
{
    node* newnode=new node(data);
    if(head==NULL)
    {
head=newnode;
tail=newnode;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insertattail(node* &head,node* &tail,int data)
{
node* newnode=new node(data);
    if(head==NULL)
    {
tail=newnode;
head=newnode;
return;
    }
    
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void insertatlocation(node* &head,node* &tail,int data,int location)
{  
    node* newnode=new node(data);
    if(head==NULL)
    {
head=newnode;
tail=newnode;
return;
    }
     node* prevnode=head;
    if(location<=0)
    {
        insertathead(head,tail,data);
        return;
    }
    int len=getLength(head);
    if(location>=len)
    {
        insertattail(head,tail,data);
        return;
    }
     int i=1;
     while(i<location)
     {
prevnode=prevnode->next;
i++;
     }
     node* nextnode=prevnode->next;
     newnode->next=nextnode;
     nextnode->prev=newnode;
     prevnode->next=newnode;
     newnode->prev=prevnode;
}
void deletenode(node* &head,node* &tail,int location)
{
    if(head==NULL)
    {
        cout<<"list is laready empty!"<<endl;
    }
    if(location==0)
    {
        node* temp=head;
        head=temp->next;
        head->prev=NULL;
        temp->next=NULL;
        delete  temp;
        return;
    }
    int len=getLength(head);
    if(location>=len-1)
    {
        node* temp=tail;
        tail=temp->prev;
        temp->prev=NULL;
        tail->next=NULL;
        delete temp;
        return;
    }
    node* toremove=head;
    int i=0;
    while(i<location)
    {
        toremove=toremove->next;
        i++;
    }
    toremove->prev->next=toremove->next;
    toremove->next->prev=toremove->prev;
    delete toremove;

}
node* reverse(node* &prev,node* &curr)
{
    if(curr==NULL)
    {
        return prev;
    }
    node* forward=curr->next;
    curr->next=prev;
    reverse(curr,forward);
}
int main()
{
 node* first=new node(10);
 node* second=new node(20);
 node* third=new node(30);
 first->next=second;
 second->prev=first;
 second->next=third;
 third->prev=second;
 node* head=first;
 node* tail=third;

 insertathead(head,tail,20);
 insertathead(head,tail,20);
 insertattail(head,tail,80);
//  insertatlocation(head,tail,4,3);
//  insertatlocation(head,tail,4,0);
 print(head);
 

 insertatlocation(head,tail,4,6);
 deletenode(head,tail,0);
 deletenode(head,tail,2);
 print(head);

 node* curr=head;
 node*previ=NULL;
 head=reverse(previ,curr);





 print(head);

}