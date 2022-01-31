class Solution {
public:
    /*
    [3,2,6,5,0,3]   
    
    dp[i][0]--> buy this
    -->   dp[i-1][1]  -->sell that ele
    dp[i][1]--->selling   
   max(prices[i]-prices[i-1]+dp[i-1][0],dp[i-1][1])
    
    
    
    
    */
    int maxProfit(vector<int>& prices) {
         int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,0));
        dp[0][0]=-prices[0];
        for(int i=1;i<n;i++){
            dp[i][1]= max(prices[i]+dp[i-1][0],dp[i-1][1]);
            dp[i][0]=max(-prices[i]+dp[i-1][1],dp[i-1][0]);
            int mx=0;
            // for(int j=i-1;j>=0;j--){
            //     dp[i]=max(dp[i],(prices[i]-prices[j])+((j>=1)?dp[j-1]:0));
            // }
            // dp[i]=max(dp[i],dp[i-1]);
        }
       
        return (dp[n-1][1]);
    }
};