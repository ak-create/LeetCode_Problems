class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>min_sell(n,0);
        min_sell[0]=prices[0];
        for(int i=1;i<n;i++){
          min_sell[i]=min(prices[i],min_sell[i-1]);
        }
        int ans=0;
        for(int i=1;i<n;i++){
            ans=max(ans,prices[i]-min_sell[i]);
        }
        return ans;
    }
};