class Solution {
public:
    bool isValid(string s) {
    //    int index=s.find("abc");
    //    if(s.size()==0)return true;
    //   if(index!=string::npos)
    //   {
    //      string left=s.substr(0,index);
    //    string right=s.substr(index+3,s.size()); 
    //    return isValid(left+right);
    //   }
    //   return false;
    stack<int> st;
    if(s[0]!='a')return false;
    for(int i=0;i<s.size();i++)
    {
        if(st.empty()&&s[i]!='a')return false;
        if(s[i]=='a')
        {
            st.push(s[i]);
        }
        else if(s[i]=='b')
        {
            if(st.top()=='a')
            {
                st.push(s[i]);
            }
            else{
                return false;
            }
        }
        else if(s[i]=='c')
        {
            if(!st.empty()&&st.top()=='b')
            {
                st.pop();
                if(!st.empty()&&st.top()=='a')
                {
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(!st.empty())return false;
    return true;
    }

};