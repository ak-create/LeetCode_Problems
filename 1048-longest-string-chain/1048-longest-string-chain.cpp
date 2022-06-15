class Solution {
public:
    
    bool static mysort(string p,string s)
    {
        if(s.size()!=p.size())
        return (int)s.size()>(int)p.size();
        
        else
        {
            for(int i=0;i<s.size();i++)
                return (s[i]>p[i]);
                   
        }
        return false;
    }
    int longestStrChain(vector<string>& words) {
        int n=words.size();
       sort(words.begin(),words.end(),mysort);
      //  int dp[n+1];
        vector<int>dp(n+1,1);
        //   for(int i=1;i<=n;i++)
        // {
        //       cout<<words[i-1]<<" ";
        //   }
        // cout<<endl;
      //  memset(dp,1,sizeof(dp));
        
        for(int i=1;i<=n;i++)
        {
            int mx=0;
            for(int j=i-1;j>=1;j--)
            {
                if(words[i-1].size()==words[j-1].size()+1)
                {
                    int chj=0,ch=0,cnt=0;
                    while(ch<words[i-1].size() and chj<words[j-1].size())
                    {
                        if(words[i-1][ch]==words[j-1][chj]){
                            chj++;
                            ch++;}
                        else{
                            cnt++;
                            if(cnt>1)
                                break;
                            ch++;
                        }
                        
                    }
                    if(cnt==0 or cnt==1)
                        mx=max(mx,dp[j]);
                }
            }
            dp[i]=max(dp[i],mx+1);
        }
        
        int ans=1;
        for(int i=0;i<=n;i++){
          // cout<<dp[i]<<" ";
            ans=max(ans,dp[i]);
        }
       // cout<<endl;
        return ans;
        
    }
};