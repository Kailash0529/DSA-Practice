/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

   int findlen(ListNode* head)
   {
    int c=0;
    while(head)
    {
c++;
head=head->next;
    }
    return c;
   }
   void posfromtail(ListNode* head,ListNode* &ans,int &pos)
{
    if(head==NULL)
    {
        
        return;
    }
    int len=findlen(head);
   
   
posfromtail(head->next,ans,pos);
    
    if(pos==1)
    {
        ans=head;
        
    }
    pos--;


}

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev=nullptr;
        posfromtail(head,prev,n);
        
 if(prev!=nullptr)
        {
ListNode* temp=head;
cout<<temp->val;
cout<<prev->val;
if(prev==head)
{
    head=head->next;
    return head;
}
while(temp->next!=prev)
{
    
    temp=temp->next;
}
temp->next=prev->next;
delete prev;


        }
        else{
            return nullptr; 
        }
        return head;
    
    }
};