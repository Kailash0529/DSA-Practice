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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode();
        ListNode* temp=l3;
        int sum;
        while(l1&&l2)
        { sum=l1->val+l2->val;
if((sum)>=10||sum+l3->val>=10)
{
    l3->val+=sum-10;
    l3->next=new ListNode(1);
    l3=l3->next;
    
}
else{
    
    l3->val+=sum;
    if(l1->next||l2->next)
    {
         l3->next=new ListNode();
          l3=l3->next;
    }
   
} 
l1=l1->next;
l2=l2->next;

        }
        while(l1)
        {
            if(l1->val+l3->val>=10)
            {
                l3->val=l1->val+l3->val-10;
                l3->next=new ListNode(1);
                l3=l3->next;
            }
            else{
                l3->val=l3->val+l1->val;
                if(l1->next)
                {
                    l3->next=new ListNode();
                    l3=l3->next;
                }
            }
            l1=l1->next;
        }
         while(l2)
        {
            if(l2->val+l3->val>=10)
            {
                l3->val=l2->val+l3->val-10;
                l3->next=new ListNode(1);
                l3=l3->next;
            }
            else{
                l3->val=l3->val+l2->val;
                if(l2->next)
                {
                    l3->next=new ListNode();
                    l3=l3->next;
                }
            }
            l2=l2->next;
        }
    
        return temp;
    }
};