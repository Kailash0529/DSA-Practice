class Solution {
public:
static bool khuchu(string a,string b)
{
    string l=a+b;
    string m=b+a;
    return l>m;
}
    string largestNumber(vector<int>& nums) {
        vector<string>k;
        for(auto n:nums)
        {

            k.push_back(to_string(n));
        }
        
        sort(k.begin(),k.end(),khuchu);

        if(k[0]=="0")return "0";
        string ans="";
        for(auto str:k)
        {
            ans+=str;
        }
        return ans;
    }
};