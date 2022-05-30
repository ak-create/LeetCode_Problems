class Solution {
public:

    
 int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
     
        dp[1][1]=1;
     
     for(int i=2;i<=n;i++)
     {
         dp[1][i]=1;
     }
         for(int i=2;i<=m;i++)
         {
             for(int j=1;j<=n;j++)
             {
                 dp[i][j]=dp[i-1][j]+dp[i][j-1];
             }
         }
        
        return dp[m][n];
        
    }
};