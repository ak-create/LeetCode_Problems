class Solution {
public:
    int dp[55][55][55];
    int recdp(int r1,int c1,int r2,vector<vector<int>>& grid)
    {
        int c2=r1+c1-r2;
        if(r1>=grid.size() or r2>=grid.size() or c1>=grid[0].size() or c2>=grid[0].size() or grid[r1][c1]==-1 or grid[r2][c2]==-1)
            return INT_MIN;
        
        if(dp[r1][c1][r2]!=-1)
            return dp[r1][c1][r2];
        
        if(r1==grid.size()-1 and c1==grid.size()-1)
            return grid[r1][c1];
        
       
            
        
        int cherries=0;
        if(r1==r2 and c1==c2)
            cherries+=grid[r1][c1];
        else
            cherries+=(grid[r1][c1]+grid[r2][c2]);
        
        int hh=recdp(r1,c1+1,r2,grid);
        int hv=recdp(r1,c1+1,r2+1,grid);
        int vh=recdp(r1+1,c1,r2,grid);
        int vv=recdp(r1+1,c1,r2+1,grid);
        
        cherries+=max({hh,vh,hv,vv});
        dp[r1][c1][r2]=cherries;
        return cherries;
        
        
        
        
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        
       memset(dp,-1,sizeof(dp));
       
       int ans=recdp(0,0,0,grid);
        
        if(ans>=0)
        return ans;
        else
            return 0;
        
    }
};