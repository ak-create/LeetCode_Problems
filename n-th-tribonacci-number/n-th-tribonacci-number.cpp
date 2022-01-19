class Solution {
public:
    int recdp(vector<int>&dp,int n){
        if(n==0)
            return dp[n]=0;
         if(n==1||n==2)
            return dp[n]=1;
        
        if(dp[n]!=-1)
            return dp[n];
        
        return dp[n]=recdp(dp,n-1)+recdp(dp,n-2)+recdp(dp,n-3);
        
    }
    int tribonacci(int n) {
        vector<int>dp(40,-1);
       return recdp(dp,n);
    }
};