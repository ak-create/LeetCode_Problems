class Solution {
public:
      int dp[1005][1005];
    int recdp(string &text1,string &text2,int n,int m,int i,int j){
       if(i==0&&j==0)
           return dp[i][j]=(text1[i]==text2[j]);
        if(i<0||j<0)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(text1[i]==text2[j])
            return dp[i][j]=recdp(text1,text2,n,m,i-1,j-1)+1;
        else
            return dp[i][j]=max(recdp(text1,text2,n,m,i-1,j),recdp(text1,text2,n,m,i,j-1));  
        
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        
        memset(dp,-1,sizeof(dp));
       return recdp(text1,text2,n,m,n-1,m-1);
    }
};