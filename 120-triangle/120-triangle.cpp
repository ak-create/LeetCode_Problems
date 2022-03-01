class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
         vector<vector<int>>dp(triangle.size(),vector<int>(triangle[triangle.size()-1].size(),INT_MAX));
        dp[0][0]=triangle[0][0];
        for(int i=1;i<triangle.size();i++){
            for(int j=0;j<=i;j++){
                dp[i][j]=min(dp[i-1][j],((i-1<0||j-1<0)?INT_MAX:dp[i-1][j-1]))+triangle[i][j];
            }
        }
        
        int ans=INT_MAX;
        for(int i=0;i<triangle[triangle.size()-1].size();i++){
            ans=min(ans,dp[triangle.size()-1][i]);
        }
        return ans;
    }
};