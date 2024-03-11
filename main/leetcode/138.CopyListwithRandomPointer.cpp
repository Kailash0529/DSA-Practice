/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)return 0;
        Node* it=head;
        while(it)
        {
            Node* copy=new Node(it->val);
            copy->next=it->next;
            it->next=copy;
            it=it->next->next;
        }
        it=head;
        while(it)
        {
            Node* copy=it->next;
            copy->random=it->random ? it->random->next:nullptr;
            it=it->next->next;
        }
        it=head;
        Node* copyhead=it->next;
        while(it)
        {
            Node* copy=it->next;
            it->next=it->next->next;
            if(copy->next)
            {
                copy->next=copy->next->next;
            }
            it=it->next;
        }
        return copyhead;
    }
};