class Solution {
public:
    
   
    int ans=0;
  //int N=50;
    //vector<int>dp(50,-1);
   int dp[50];
    int recdp(int n){
        if(n==0){
        
            return 1;
        }
        if(n<0){
            return 0;
        }
        
        if(dp[n]!=-1)
            return dp[n];
        
      return dp[n]=recdp(n-1)+recdp(n-2);
    }
   // memset(dp,-1,sizeof(dp));
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        
        
        
        return recdp(n);
//         if(n==0){
        
//             return 1;
//         }
//         if(n<0){
//             return 0;
//         }
        
//         if(dp[n]!=-1)
//             return dp[n];
        
//       return dp[n]= climbStairs(n-1)+climbStairs(n-2);
    }
};