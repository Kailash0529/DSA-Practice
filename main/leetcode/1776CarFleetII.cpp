class Solution {
public:
    vector<double> getCollisionTimes(vector<vector<int>>& cars) {
        stack<double>st;
        vector<double>ans(cars.size(),-1);
        for(int i=cars.size()-1;i>=0;i--)
        {
            while(!st.empty()&&cars[st.top()][1]>=cars[i][1])
            {
st.pop();
            }
            while(!st.empty())
            {
                double time=(double)(cars[st.top()][0]-cars[i][0])/(cars[i][1]-cars[st.top()][1]);
                if(ans[st.top()]==-1||time<=ans[st.top()])
                {
                    ans[i]=time;
                    break;
                }
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};