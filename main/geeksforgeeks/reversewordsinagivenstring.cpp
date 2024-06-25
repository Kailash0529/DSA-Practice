class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int l=S.length();
        string str;
        for(int i=l-1;i>=0;i--)
        {
            if(S[i]=='.')
            {
                int r=l-i;
                l=i-1;
                str.append(S.substr(i+1,r));
                str.append(".");
            }
        }
        str.append(S.substr(0,l+1));
       
            
         
        return str;
    } 
};