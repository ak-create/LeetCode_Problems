class Solution {
public:
    int rec(int i,int j, vector<vector<int>>&dp,int m,int n)
    {
        if(i==m-1 and j==n-1)
            return 1;
        if(i>=m or j>=n or i<0 or j<0)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        
       int d= rec(i+1,j,dp,m,n);
        int r=rec(i,j+1,dp,m,n);
        return dp[i][j]=r+d;
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
     return  rec(0,0,dp,m,n);
    }
};