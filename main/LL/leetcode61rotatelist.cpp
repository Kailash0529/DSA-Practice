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
    if(head==0)return 0;
    int c=0;
    while(head)
    {
       
        head=head->next;
         c++;
    }
    return c;
}
    ListNode* rotateRight(ListNode* head, int k) {
        int len=findlen(head);
        if(len==0)return 0;
        int actualrotate=k%len;
        if(actualrotate==0)return head;
        int taillength=len-actualrotate-1;
        ListNode* newtail=head;
        ListNode* newhead=nullptr;
        while(taillength--)
        {
newtail=newtail->next;
        }
        newhead=newtail->next;
        newtail->next=nullptr;
        ListNode* it=newhead;
       
        while(it->next)
        {
            it=it->next;
        }
        it->next=head;
        return newhead;
    }
};