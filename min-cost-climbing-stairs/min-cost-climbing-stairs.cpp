class Solution {
public:
    
    int recdp(vector<int>&cost ,int ind,int n, vector<vector<int>>&dp ){
        
//         if(ind==0)
//             return dp[ind]=cost[0];
//         if(ind==1)
//             return dp[ind]=min(cost[0],cost[1]);
        
//         if(dp[ind]!=-1)
//             return dp[ind];
        
//         return dp[ind]= min(recdp(cost,ind-1,n,dp),cost[ind]+recdp(cost,ind-2,n,dp));
        dp[0][0]=0;
        dp[0][1]=cost[0];
        dp[1][0]=cost[0];
        dp[1][1]=cost[1];
        
        for(int i=2;i<n;i++){
            dp[i][0]=(dp[i-1][1]);
            dp[i][1]=min({dp[i-1][1]+cost[i],dp[i-2][1]+cost[i],dp[i-1][0]+cost[i]});
        }
        return min(dp[n-1][0],dp[n-1][1]);
            
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<vector<int>>dp(1005,vector<int>(2,-1));
       return recdp(cost,cost.size()-1,cost.size(),dp);
    }
};