class Solution {
public:  


    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
     
        if(obstacleGrid[0][0]==0)
           dp[1][1]=1;
     
        if(dp[1][1]==1)
        {
     for(int i=2;i<=n;i++)
     {
         if(obstacleGrid[0][i-1]==1)
         {
             dp[1][i]=0;
             break;
         }
            
           dp[1][i]=1;
     }
        }
        
         for(int i=2;i<=m;i++)
         {
             for(int j=1;j<=n;j++)
             {
                 if(obstacleGrid[i-1][j-1]==1)dp[i][j]=0;
                 
                 else
                 dp[i][j]=dp[i-1][j]+dp[i][j-1];
             }
         }
        
        return dp[m][n];
        
    
    }
};