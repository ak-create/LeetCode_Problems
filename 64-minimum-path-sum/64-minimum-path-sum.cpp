class Solution {
public:
    int recdp(int indi,int indj,vector<vector<int>>&grid,vector<vector<int>>&dp)
    {
        if(indi==grid.size()-1&&indj==grid[0].size()-1)
            return grid[indi][indj];
        
        if(indi>=grid.size()||indj>=grid[0].size()||indi<0||indj<0)
            return 1001;
        
        if(dp[indi][indj]!=1001)
            return dp[indi][indj];
        
        int right=recdp(indi,indj+1,grid,dp);
        int down=recdp(indi+1,indj,grid,dp);
        return dp[indi][indj]=min(right,down)+grid[indi][indj];
           
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),0));
        dp[0][0]=grid[0][0];
        for(int i=1;i<grid.size();i++){
            dp[i][0]=dp[i-1][0]+grid[i][0];
        }
        for(int j=1;j<grid[0].size();j++){
            dp[0][j]=dp[0][j-1]+grid[0][j];
        }
        for(int i=1;i<grid.size();i++){
            for(int j=1;j<grid[0].size();j++){
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
            }
        }
        return dp[grid.size()-1][grid[0].size()-1];
       
    }
};