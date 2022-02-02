class Solution {
public:
    /*
    0--->  buying
    1---> selling
    2-->  cooldown
    
    */
    int maxProfit(vector<int>& prices) {
int n= prices.size();
        vector<vector<int>>dp(n,vector<int>(4,0));
        dp[0][0]=-prices[0];
        for(int i=1;i<n;i++){
            dp[i][0]=max({-prices[i]+dp[i-1][2],dp[i-1][0]});
            dp[i][1]=max(prices[i]+dp[i-1][0],dp[i-1][1]);
            dp[i][2]=dp[i-1][1];
        }
        return max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});
    }
        
        
    
};