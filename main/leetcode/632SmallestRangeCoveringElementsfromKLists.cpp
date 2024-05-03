class node{
public:
int data;
int row;
int col;
node(int d,int r,int c)
{
    data=d;
    col=c;
    row=r;
}
};
class compare{
public:
bool operator()(node* a,node* b)
{
    return a->data >b->data;
}
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<node*,vector<node*>,compare> minheap;
         int mini=INT_MAX;
         int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            mini=min(mini,nums[i][0]);
            maxi=max(maxi,nums[i][0]);
            minheap.push(new node(nums[i][0],i,0));
        }
        int ansstart=mini;
        int ansend=maxi;
        while(!minheap.empty())
        {
            node* temp=minheap.top();
            minheap.pop();
            int element=temp->data;
            int toprow=temp->row;
            int topcol=temp->col;
            mini=element;
            if((ansend-ansstart)>(maxi-mini))
            {
                ansstart=mini;
                ansend=maxi;
            }
            if(topcol+1<nums[toprow].size())
            {
                node* newvala=new node(nums[toprow][topcol+1],toprow,topcol+1);
                maxi=max(maxi,nums[toprow][topcol+1]);
                minheap.push(newvala);
            }
            else{
                break;
            }
        }
       vector<int>final;
       final.push_back(ansstart);
       final.push_back(ansend);
       return final;
    }
};class node{
public:
int data;
int row;
int col;
node(int d,int r,int c)
{
    data=d;
    col=c;
    row=r;
}
};
class compare{
public:
bool operator()(node* a,node* b)
{
    return a->data >b->data;
}
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<node*,vector<node*>,compare> minheap;
         int mini=INT_MAX;
         int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            mini=min(mini,nums[i][0]);
            maxi=max(maxi,nums[i][0]);
            minheap.push(new node(nums[i][0],i,0));
        }
        int ansstart=mini;
        int ansend=maxi;
        while(!minheap.empty())
        {
            node* temp=minheap.top();
            minheap.pop();
            int element=temp->data;
            int toprow=temp->row;
            int topcol=temp->col;
            mini=element;
            if((ansend-ansstart)>(maxi-mini))
            {
                ansstart=mini;
                ansend=maxi;
            }
            if(topcol+1<nums[toprow].size())
            {
                node* newvala=new node(nums[toprow][topcol+1],toprow,topcol+1);
                maxi=max(maxi,nums[toprow][topcol+1]);
                minheap.push(newvala);
            }
            else{
                break;
            }
        }
       vector<int>final;
       final.push_back(ansstart);
       final.push_back(ansend);
       return final;
    }
};