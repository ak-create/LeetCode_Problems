class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans=0;
        int cnt=0;
        for(int i=0;i<s.size();i++){
           if(s[i]=='('){
               if(cnt==0)
               cnt++;
               else
                  cnt*=2;
           } 
            else
            {
                
                if(s[i-1]=='(')
                ans+=cnt;
                
                 if(cnt!=1)
                cnt/=2;
                else
                    cnt--;
            }
           

        }
        return ans;
    }
};