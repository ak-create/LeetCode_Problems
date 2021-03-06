class Solution {
public:
    /*
    0--->  buying
    1---> selling
    2-->  cooldown
    3-->do nothing
    
    */
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        vector<vector<int>>dp(n,vector<int>(4,0));
        
        dp[0][0]=-prices[0];
        for(int i=1;i<n;i++){
            dp[i][0]=max({-prices[i]+dp[i-1][2],dp[i-1][0],-prices[i]+dp[i-1][3]});
            dp[i][1]=(prices[i]+dp[i-1][0]);
            dp[i][2]=dp[i-1][1];
            dp[i][3]=max({dp[i-1][0],dp[i-1][1],dp[i-1][3],dp[i-1][2]});
        }
        
//         for(int i=0;i<n;i++){
//             cout<<dp[i][0]<<" "<<dp[i][1]<<" "<<dp[i][2]<<" "<<dp[i][3]<<endl;
//         }
        return max({dp[n-1][1],dp[n-1][2],dp[n-1][3]});
        
        
    }
};