class Solution {
public:
Node* merge(Node* a,Node* b)
{
    // Node* ans=0;
    // Node* cp=0;
    // Node* ans=cp;
    // Node* left=a;
    // Node* right=b;
    // while(left&&right)
    // {
    //     if(left->data<=right->data)
    //     {
    //         cp->next=left;
    //         cp=left;
    //         left=left->bottom;
    //     }
    //     else if(right->data<left->data)
    //     {
    //         cp->next=right;
    //         cp=right;
    //         right=right->bottom;
    //     }
    // }
    // if(left)
    // {
    //     cp->next=left;
    //     cp=left;
    //     left=left->bottom;
    // }
    // if(right)
    // {
    //     cp->next=right;
    //     cp=right;
    //     right=right->bottom;
    // }
    // return ans->next;
    if(!a)return b;
    if(!b)return a;
    Node* ans=0;
    if(a->data<b->data)
    {
        ans=a;
        a->bottom=merge(a->bottom,b);
    }
    else{
        ans=b;
        b->bottom=merge(a,b->bottom);
    }
    return ans;
}
    Node *flatten(Node *root)
    {
        // Your code here
        if(!root)return 0;
        Node* start=merge(root,flatten(root->next));
        return start;
        // Node* final=NULL;
        // while(start)
        // {
        //     // final=merge(root,start->next);
        //     start=start->next;
        // }
        // return root;
    }
};