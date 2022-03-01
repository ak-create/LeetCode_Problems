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
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),1001));
        return recdp(0,0,grid,dp);
    }
};