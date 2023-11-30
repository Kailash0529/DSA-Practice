class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i=0;
        while(true)
        {
            
            char currch=0;
            for(auto str:strs)
            {
                if(i>=str.size())
            {
                currch=0;
                break;
            }
                if(currch==0)
                {
                    currch=str[i];

                }
                else if(str[i]!=currch)
                {
                    currch=0;
                    break;
                }
                
            }
            if(currch==0)
            {
                break;
            }
             ans.push_back(currch);
             i++;
        }
        return ans;
       
    }
};