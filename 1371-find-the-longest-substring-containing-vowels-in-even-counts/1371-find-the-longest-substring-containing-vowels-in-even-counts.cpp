class Solution {
public:
    int findTheLongestSubstring(string s) {
        vector<int>dp(1024,s.size());
        
      dp[0]=-1;
        int ans=0;
        int mask=0;
        for(int i=0;i<s.size();i++){
            switch(s[i]){
            case 'a':
                mask^=(1<<1);
                break;
           case 'e':
               mask^=(1<<2);
               break;
          case 'i':
                mask^=(1<<3);
                break;
           case 'o':
               mask^=(1<<4);
               break;
           case 'u':
                mask^=(1<<5);
                break;
          default:
               break;         
                    
            }
          ans=max(ans,i-dp[mask]);
            
        if(dp[mask]==s.size())
            dp[mask]=i;
        }
        return ans;
    }
};