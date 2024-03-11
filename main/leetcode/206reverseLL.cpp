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
    ListNode* reverseList(ListNode* head) {
        if(head==0)
        {
            return head;
        }
        else if(head->next==0)
        {
            return head;
        }
         ListNode* curr=head;
          ListNode* prev=0;
           ListNode* forward=curr->next;
           while(forward!=0)
           {
               forward=curr->next;
               curr->next=prev;
               prev=curr;
               curr=forward;
           }
           return prev;
    }
};