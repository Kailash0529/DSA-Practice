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
ListNode* findmid(ListNode* head)
{
     ListNode* slow=head;
     ListNode* fast=head->next;
     
     while(fast&&fast->next)
     {
         slow=slow->next;
         fast=fast->next->next;
         
     }
     
     return slow;
     
}
  ListNode* merge(ListNode* list1, ListNode* list2) {
      if(list1==0)return list2;
      if(list2==0)return list1;
        ListNode* left=list1;
        ListNode* right=list2;
        ListNode* temp=new ListNode(-1);
        ListNode* ans=temp;
        while(left&&right)
        {
            if(left->val<=right->val)
            {
ans->next=left;
ans=left;
left=left->next;
            }
            else if(right->val<left->val)
            {
                ans->next=right;
                ans=right;
                right=right->next;
            }
        }
        if(right)
        {
            ans->next=right;
            ans=right;
            right=right->next;
        }
          if(left)
        {
            ans->next=left;
            ans=left;
            left=left->next;
        }
        return temp->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL)
        {
return head;
        }
        ListNode* middle=findmid(head);
        ListNode* first=head;
        ListNode* right=middle->next;
        middle->next=0;
        first=sortList(first);
        right=sortList(right);
        ListNode* merged=merge(first,right);
        return merged;


    }
};