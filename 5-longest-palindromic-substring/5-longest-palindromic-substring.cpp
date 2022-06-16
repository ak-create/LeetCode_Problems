class Solution {
public:
    bool pal(string &s,int i,int j)
    {
        while(i<j)
        {
            if(s[i-1]!=s[j-1])
                return false;
            
            i++;
            j--;
        }
        return true;
    }
    
    
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int i=1;i<=n;i++)
            dp[i][i]=1;
        
        for(int i=2;i<=n;i++)
        {
            if(pal(s,1,i))
            dp[1][i]=(i-1+1);
        }
        int l=0,r=1;
        int mx=0;
        for(int i=n-1;i>=1;i--)
        {
           
            for(int j=1;j<=n;j++)
            {
                if(j>=i)
                {
                    if(j-i==1 and s[i-1]==s[j-1])
                        dp[i][j]=2;
                    else if(dp[i+1][j-1]>0 and s[i-1]==s[j-1])
                        dp[i][j]=2+dp[i+1][j-1];
                        
                }
                if(dp[i][j]>mx)
                {
                    mx=dp[i][j];
                    l=i-1;
                    r=j-1;
                }
            }
        }
        
        string ans=s.substr(l,r-l+1);
       
       return ans;
        
            
    }
};