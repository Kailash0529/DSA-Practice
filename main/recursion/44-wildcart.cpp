class Solution {
public:
bool find(string &s,int si,string &p,int pi)
{
    //basecase
    if(si==s.size()&&pi==p.size())
    {
        return true;
    }
    if(si==s.size()&&pi<p.size())
    {
       while(pi<p.size())
       {
           if(p[pi]!='*')
           {
               return false;
           }
           pi++;
            }
            return true;
    }
    //ek case solve karlo
    if(s[si]==p[pi]||'?'==p[pi])
    {
        return find(s,si+1,p,pi+1);
    }
    if(p[pi]=='*')
    {
        bool caseA=find(s,si,p,pi+1);
        bool caseB=find(s,si+1,p,pi);
        return caseA||caseB;
    }
    return false;
}
    bool isMatch(string s, string p) {
        int si=0;
        int pi=0;
       return find(s,si,p,pi);
    }
};