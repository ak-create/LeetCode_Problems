class Solution {
public:
    
    int recdp(vector<int>&cost ,int ind,int n, vector<int>&dp ){
        
        if(ind==2)
            return dp[ind]=min(cost[1],cost[0]+cost[2]);
        if(ind==1)
            return dp[ind]=min(cost[0],cost[1]);
        
        if(dp[ind]!=-1)
            return dp[ind];
        
        return dp[ind]= min({recdp(cost,ind-1,n,dp),cost[ind]+recdp(cost,ind-2,n,dp),recdp(cost,ind-1,n,dp)+cost[ind]});
//         dp[0][0]=0;
//         dp[0][1]=cost[0];
//         dp[1][0]=cost[0];
//         dp[1][1]=cost[1];
        
//         for(int i=2;i<n;i++){
//             dp[i][0]=(dp[i-1][1]);
//             dp[i][1]=min({dp[i-1][1]+cost[i],dp[i-2][1]+cost[i],dp[i-1][0]+cost[i]});
//         }
//         return min(dp[n-1][0],dp[n-1][1]);
            
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
       int prev2=cost[0];
        int prev1=1e5;
        if(n>1)
        prev1=cost[1];
        int ans=min(prev1,prev2);
        for(int i=2;i<n;i++){
            ans=min(prev1,prev2)+cost[i];
            prev2=prev1;
            prev1=ans;
        }
        return min(prev1,prev2);
    }
};