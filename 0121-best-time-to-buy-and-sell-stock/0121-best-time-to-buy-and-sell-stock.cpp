class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=prices[0];
        int mx=0;
        for(int i=0;i<prices.size();i++)
        {
            m=min(m,prices[i]);
            mx=max(mx,prices[i]-m);
        }
        return mx;
        
    }
};