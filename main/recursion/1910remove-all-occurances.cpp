class Solution {
public:
void find(string &s,string &part)
{
    int pos=s.find(part);
    if(pos!=string::npos)
    {
        string left=s.substr(0,pos);
        string right=s.substr(pos+part.size());
        s=left+right;
        find(s,part);
    }
    else{
        return;
    }
}
    string removeOccurrences(string s, string part) {
       find(s,part);
       return s;
    }
};