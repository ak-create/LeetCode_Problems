class Solution {
public:
        int recdp(vector<int>&prices,int i,bool buy,int k,vector<vector<vector<int>>>&dp,int d){
         
        if(i>=prices.size()||k>=d)
            return 0;
        
        if(dp[i][buy][k]!=-1)
            return dp[i][buy][k];
        
        if(buy){
            return dp[i][buy][k]=max(-prices[i]+recdp(prices,i+1,!buy,k,dp,d),recdp(prices,i+1,buy,k,dp,d));
        }
        else{
            return dp[i][buy][k]=max(prices[i]+recdp(prices,i+1,!buy,k+1,dp,d),recdp(prices,i+1,buy,k,dp,d));
        }
                 
        
        
        
    }
    int maxProfit(int k,vector<int>& prices) {
        int n=prices.size();
       // int dp[n+1][2][3];
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(k,-1)));
        //memset(dp,0,sizeof(dp));
      
    return recdp(prices,0,1,0,dp,k);
        
    }
 
};