class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //taking balance zero at start 
        int balance=0;
        int start=0;
        int gata=0;
        for(int i=0;i<gas.size();i++)
        {
            balance+=gas[i]-cost[i];
            if(balance<0)
            {
                gata+=balance;
start=i+1;
balance=0;
            }

        }
        if(gata+balance>=0)
        {
            return start;
        }
        else{
            return -1;
        }
        
    }
};