class Solution {
public:  
    int rec(int i,int j, vector<vector<int>>&dp,vector<vector<int>>& obstacleGrid)
    {
          if(i<0 or j<0)
            return 0;
        
        if(obstacleGrid[i][j]==1)
            return 0;
        
        if(i==0 and j==0)
            return 1;
       
        if(dp[i][j]!=-1)
            return dp[i][j];
        
      
       
       // int l=rec(i-1,j,dp);
       // int r=rec(i,j-1,dp);
       return dp[i][j]=rec(i-1,j,dp,obstacleGrid)+rec(i,j-1,dp,obstacleGrid);
        
     }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
         vector<vector<int>>dp(m,vector<int>(n,-1));
        
        return rec(m-1,n-1,dp,obstacleGrid);
    }
};