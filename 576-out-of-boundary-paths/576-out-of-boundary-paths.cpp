class Solution {
public:
    const int mod=1e9+7;
    int dp[55][55][55];
     int rec(int i,int j,int m,int n,int maxmove,int ans)
    {
        if(ans>maxmove)
            return 0;
        if(i<0 or i>=m or j<0 or j>=n )
            return 1;
        if(dp[i][j][ans]!=-1)
            return dp[i][j][ans];
        
       long int left=rec(i,j-1,m,n,maxmove,ans+1)%mod;
       long int right=rec(i,j+1,m,n,maxmove,ans+1)%mod;
       long int top=rec(i-1,j,m,n,maxmove,ans+1)%mod;
       long int down=rec(i+1,j,m,n,maxmove,ans+1)%mod;
        
        return dp[i][j][ans]=((left+right)%mod+(top+down)%mod)%mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        int ans=0;
        memset(dp,-1,sizeof(dp));
       return rec(startRow,startColumn,m,n,maxMove,ans)%mod;
    }
};