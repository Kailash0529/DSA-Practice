class Solution {
public:
void find(vector<int>&prices,int i,int &minprice,int &maxpro)
{
//basecase
if(i==prices.size())
{
    return;
}
//ek case solve karlo
if(prices[i]<minprice)
{
    minprice=prices[i];
}
int todayspro=prices[i]-minprice;
if(todayspro>maxpro)maxpro=todayspro;
find(prices,i+1,minprice,maxpro);
}
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxpro=INT_MIN;
        find(prices,0,minprice,maxpro);
        return maxpro;
    }
};