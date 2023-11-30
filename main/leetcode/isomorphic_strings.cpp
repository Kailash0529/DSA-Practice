class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hashmap[256]={0};
        bool another[256]={0};
        for(int i=0;i<s.size();i++)
        {
            if(hashmap[s[i]]==0&&another[t[i]]==0)
            {
                hashmap[s[i]]=t[i];
                another[t[i]]=true;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(char(hashmap[s[i]]!=t[i]))
            {
                return false;
            }
        }
        return true;
    }
};