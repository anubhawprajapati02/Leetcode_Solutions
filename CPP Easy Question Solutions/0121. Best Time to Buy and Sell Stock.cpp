class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int r[prices.size()],i,m=0;
        r[prices.size()-1]=prices[prices.size()-1];
        for(i=prices.size()-2;i>=0;i--)
        {
            r[i]=(r[i+1]<prices[i]?prices[i]:r[i+1]);
            if(r[i+1]-prices[i+1]>m)
            m=r[i+1]-prices[i+1];
        }
        if(r[i+1]-prices[i+1]>m)
        m=r[i+1]-prices[i+1];
        return m;
    }
};
