class Solution {
public:
    int dp[55][55][55][55];
    int recdp(int r1,int c1,int r2,int c2,vector<vector<int>>& grid)
    {
        if(r1>=grid.size() or r2>=grid.size() or c1>=grid[0].size() or c2>=grid[0].size() or grid[r1][c1]==-1 or grid[r2][c2]==-1)
            return INT_MIN;
        
        if(dp[r1][c1][r2][c2]!=-1)
            return dp[r1][c1][r2][c2];
        
        if(r1==grid.size()-1 and c1==grid.size()-1)
            return grid[r1][c1];
        
       
            
        
        int cherries=0;
        if(r1==r2 and c1==c2)
            cherries+=grid[r1][c1];
        else
            cherries+=(grid[r1][c1]+grid[r2][c2]);
        
        int hh=recdp(r1,c1+1,r2,c2+1,grid);
        int hv=recdp(r1,c1+1,r2+1,c2,grid);
        int vh=recdp(r1+1,c1,r2,c2+1,grid);
        int vv=recdp(r1+1,c1,r2+1,c2,grid);
        
        cherries+=max({hh,vh,hv,vv});
        dp[r1][c1][r2][c2]=cherries;
        return cherries;
        
        
        
        
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        
       memset(dp,-1,sizeof(dp));
       
       int ans=recdp(0,0,0,0,grid);
        
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=n;j++)
//             {
//                 if(grid[i-1][j-1]==-1)
//                     dp[i][j]=-1;
//                 else
//                 {
//                     int l=dp[i-1][j];
//                     int r=dp[i][j-1];
//                     if(l==-1 and r==-1)
//                         dp[i][j]=-1;
//                    else if(l==-1)
//                         dp[i][j]=max(0,r)+grid[i-1][j-1];
//                     else if(r==-1)
//                         dp[i][j]=max(0,l)+grid[i-1][j-1];
//                     else
//                         dp[i][j]=max(l,r)+grid[i-1][j-1];
//                 }
                   
//             }
//         }
        
//         for(int i=0;i<=n;i++)
//         {
//             for(int j=0;j<=n;j++)
//                 cout<<dp[i][j]<<" ";
//             cout<<endl;
//         }
        
//         //return dp[n][n];
//         int l=dp[n][n];
    
    
//     int i=n;
//     int j=n;
   
//     while(i>=1 && j>=1)
//     {
//         grid[i-1][j-1]=0;
//         if(dp[i-1][j]>=dp[i][j-1])
//             i--;
//         else
//             j--;
            
//     }
//      for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=n;j++)
//                 cout<<grid[i-1][j-1]<<" ";
//             cout<<endl;
//         }
       
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=n;j++)
//             {
//                 if(grid[i-1][j-1]==-1)
//                     dp2[i][j]=-1;
//                 else
//                 {
//                      int l=dp2[i-1][j];
//                     int r=dp2[i][j-1];
//                     if(l==-1 and r==-1)
//                         dp2[i][j]=-1;
//                    else if(l==-1)
//                         dp2[i][j]=max(0,r)+grid[i-1][j-1];
//                     else if(r==-1)
//                         dp2[i][j]=max(0,l)+grid[i-1][j-1];
//                     else
//                         dp2[i][j]=max(l,r)+grid[i-1][j-1];
//                 }
//             }
//         }
        
//         for(int i=0;i<=n;i++)
//         {
//             for(int j=0;j<=n;j++)
//                 cout<<dp2[i][j]<<" ";
//             cout<<endl;
//         }
//         int ans=dp[n][n]+dp2[n][n];
        if(ans>=0)
        return ans;
        else
            return 0;
        
    }
};