class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>freq(26,0);
        vector<int>vis(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        
        string ans="";
        ans.push_back(s[0]);
        vis[s[0]-'a']=1;
        freq[s[0]-'a']--;
        for(int i=1;i<s.size();i++){
            
            if(vis[s[i]-'a']==0)
            {
            while(ans.size()>=1&&ans.back()>s[i]&&freq[ans.back()-'a']>=1)
            {
                vis[ans.back()-'a']=0;
                ans.pop_back();
                
            }
            ans.push_back(s[i]);
            vis[s[i]-'a']=1;
            }    
            freq[s[i]-'a']--;
           
        }
        
        return ans;
        
    }
};