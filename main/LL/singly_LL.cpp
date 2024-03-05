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
void print(node* &head)
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
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
        cout<<"length is:"<<len;
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
        else{
// head->next=newnode;
newnode->next=head;

head=newnode;
        }
    }
    void insertattail(node* &head,node* &tail,int data)
    {
        if(tail==NULL)
        {
        node* newnode=new node(data);

            tail=newnode;
            head=newnode;
        }
        else{
        node* newnode=new node(data);

            tail->next=newnode;
            tail=newnode;
        }
    }
    void insertatposition(int data,int position,node* &head,node* &tail){
        if(head==NULL)
        {
node* newnode=new node(data);

head=newnode;
tail=newnode;

return;
        }
        if(position==0)
        {
            insertathead(head,tail,data);
            return;
        }
        int len=findLength(head);
        if(position>=len)
        {
            insertattail(head,tail,data);
            return;
        }
        int i=1;
        node* prev=head;
        while(i<position)
        {
            prev=prev->next;
            i++;
        }
        node* curr=prev->next;
node* newnode=new node(data);

        newnode->next=curr;
        prev->next=newnode;
        
    }
    void deletenode(node* &head,node* &tail,int position)
    
    {
        if(position==0)
        {
            node* temp=head;
            head=head->next;
            delete temp;
        }
        int len=findLength(head);
        if(position==len)
        {
            node* prev=head;
            int i=1;
            while(i<position-1)
            {
                prev=prev->next;
                i++;
            }
            node* temp=tail;
            prev->next=NULL;
            tail=prev;
            delete temp;
        }
        else{
             node* prev=head;
            int i=1;
            while(i<position)
            {
                prev=prev->next;
                i++;
            }
            node* temp=prev->next;
            prev->next=temp->next;
            temp->next=NULL;
            delete temp;
        }
    }
node* reverse(node* &curr,node* &prev)
{
    if(curr==NULL)
    {                                                                                                                                                                               
        return prev;
    }
    node* forward=curr->next;
    curr->next=prev;
    return reverse(forward,curr);
}
int main()
{
    // node* head=new node(NULL);
    // node* tail=new node(NULL);
    node* head=NULL;
    node*tail=NULL;


// node* first= new node(10);
// node* second= new node(20);
// node* third= new node(30);
// node* fourth= new node(40);
// node* fifth= new node(50);
// first->next=second;
// second->next=third;
// third->next=fourth;
// fourth->next=fifth;
// print(first);

// insertattail(head,tail,20);
// insertattail(head,tail,50);
// insertathead(head,tail,50);
// insertathead(head,tail,50);

insertatposition(50,2,head,tail);
insertatposition(70,0,head,tail);
insertatposition(60,1,head,tail);
insertatposition(80,0,head,tail);
insertattail(head,tail,40);
insertatposition(80,5,head,tail);
// deletenode(head,tail,6);
// deletenode(head,tail,0);
deletenode(head,tail,1);
node* prev=NULL;
node* curr=head;
print(head);
cout<<endl;
head=reverse(curr,prev);

print(head);

}