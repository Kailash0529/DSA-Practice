class Solution {
public:
    bool isPalindrome(int x) {
        string s=std::to_string(x);
        int i=0,j=s.length()-1;
     while(i<j)
     {
if(s[i]==s[j])
{
    i++,j--;

}
else{
    return false;
}
     }
     return true;

    }
};