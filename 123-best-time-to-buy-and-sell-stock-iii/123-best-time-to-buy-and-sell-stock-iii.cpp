class Solution {
public:
    
    /*
    [3,3,5,0,0,3,1,4]  -->buy ->0-->
    
    */
    int recdp(vector<int>&prices,int i,bool buy,int k,vector<vector<vector<int>>>&dp){
         
        if(i>=prices.size()||k>=2)
            return 0;
        
        if(dp[i][buy][k]!=-1)
            return dp[i][buy][k];
        
        if(buy){
            return dp[i][buy][k]=max(-prices[i]+recdp(prices,i+1,!buy,k,dp),recdp(prices,i+1,buy,k,dp));
        }
        else{
            return dp[i][buy][k]=max(prices[i]+recdp(prices,i+1,!buy,k+1,dp),recdp(prices,i+1,buy,k,dp));
        }
                 
        
        
        
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
       // int dp[n+1][2][3];
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(2,-1)));
        //memset(dp,0,sizeof(dp));
      
    return recdp(prices,0,1,0,dp);
        
    }
};