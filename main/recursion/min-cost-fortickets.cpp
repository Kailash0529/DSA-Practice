class Solution {
public:
int find(vector<int>& days, vector<int>& costs,int i)
{
    //basecase
    if(i>=days.size())return 0;
    //ek case solve karlo
    //1 day
    int day1=costs[0]+find(days,costs,i+1);
    //7days
    int end=days[i]+7-1;
    int j=1;
    while(j<days.size()&&days[j]<=end) 
    {
j++;
    }
        int day7=costs[1]+find(days,costs,j);
        //30days
        end=days[i]+30-1;
        j=i;
        while(j<days.size()&&days[j]<=end)
        {
j++;
        }
        int day30=costs[2]+find(days,costs,j);
        return min(day1,min(day7,day30));

}
    int mincostTickets(vector<int>& days, vector<int>& costs) {
       return find(days,costs,0);
    }
};