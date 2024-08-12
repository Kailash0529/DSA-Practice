class Solution {
public:
    int reverse(int x) {
        string ans; 
        ans=to_string(abs(x));
        std::reverse(ans.begin(),ans.end());
        long long digit=stoll(ans);
        if(x<0)digit=-digit;
           if (digit > INT_MAX || digit < INT_MIN) {
            return 0;
        }
        return digit;
    }
};