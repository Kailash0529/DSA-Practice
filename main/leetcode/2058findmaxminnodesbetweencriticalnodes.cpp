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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans={-1,-1};
        ListNode* prev=head;
        if(!prev)return ans;
        ListNode* curr=head->next;
        if(!curr)return ans;
        ListNode* nxt=head->next->next;
        if(!nxt)return ans;
        int i=1;
        int mind=INT_MAX;
        int firstcp=-1;
        int lastcp=-1;
        while(nxt)
        {
            bool iscp=((curr->val>prev->val&&curr->val>nxt->val)||(curr->val<prev->val&&curr->val<nxt->val)) ? true:false;
            if(iscp&&firstcp==-1)
            {
                firstcp=i;
                lastcp=i;
            }
            else if(iscp)
            {
            mind=min(mind,i-lastcp);
         lastcp=i;
            }
            i++;
            prev=prev->next;
            curr=curr->next;
            nxt=nxt->next;
        }
        if(lastcp==firstcp){
            return ans;
        }
        ans[0]=mind;
        ans[1]=lastcp-firstcp;
        return ans;
        
    }
};