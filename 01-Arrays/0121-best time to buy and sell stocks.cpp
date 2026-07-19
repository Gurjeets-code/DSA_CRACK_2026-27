class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int buystock=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>buystock)
                ans=max(ans,prices[i]-buystock);
            buystock=min(prices[i],buystock);
        }
        return ans;
    }
};
