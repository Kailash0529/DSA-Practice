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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>src;
        while(head)
        {
            src.push_back(head->val);
            head=head->next;
        }
        stack<int> st;
        vector<int>ans(src.size());
        for(int i=0;i<src.size();i++)
        {
while(!st.empty()&&src[st.top()]<src[i])
{
    int ele=st.top();
    st.pop();
    ans[ele]=src[i];
}
st.push(i);
        }
        return ans;
    }
};