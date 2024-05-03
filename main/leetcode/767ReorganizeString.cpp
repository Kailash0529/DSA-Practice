class node{
public:
char data;
int count;
node(char d,int c)
{
    data=d;
    count=c;
}
};
class compare{
    public:
    bool operator()(node* a,node*b)
    {
        return a->count<b->count;
    }
};
class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<node*,vector<node*>,compare>maxheap;
        int freq[26]={0};
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            int ch=s[i];
            freq[ch-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0)
            {
                node* temp=new node(i+'a',freq[i]);
                maxheap.push(temp);
            }
        }
        while(maxheap.size()>1)

        {
            node* first=maxheap.top();
            maxheap.pop();
            node* second=maxheap.top();
            maxheap.pop();
            ans+=first->data;
            ans+=second->data;
            first->count--;
            second->count--;
            if(first->count!=0)
            {
                maxheap.push(first);
            }
            if(second->count!=0)
            {
                maxheap.push(second);
            }

        }
        if(maxheap.size()==1)
        {
            node* temp=maxheap.top();
            maxheap.pop();
          if(temp->count==1)
          {
            ans+=temp->data;
          }
          else{
            return "";
          }
        }
        return ans;
    }
};