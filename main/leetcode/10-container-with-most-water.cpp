class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=1, j=height.size(),ans=0;
       while(i<j)
       {
        int tg=min(height[i-1],height[j-1])*(j-i);
if(height[i-1]>height[j-1]){j--;}
else{
    i++;
}
ans=max(ans,tg);
       }
       return ans;

    }
};