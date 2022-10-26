class Solution {
public:
    vector<int> getRow(int rowindex) {
        if(rowindex==0)
            return {1};
        vector<vector<int>>dp(35,vector<int>(70,0));
        dp[1][1]=1;
        for(int i=2;i<35;i++)
        {
            dp[i][1]=1;
            dp[i][i]=1;
        }
        
        for(int i=3;i<=rowindex+1;i++)
        {
            for(int j=2;j<=rowindex+1;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
            }
        }
        
        vector<int>ans;
        for(int i=1;i<=rowindex+1;i++)
            ans.push_back(dp[rowindex+1][i]);
        
        return ans;
    }
};