class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(s.size()<p.size())
            return ans;
        vector<int>pfreq(26,0);
        vector<int>sfreq(26,0);
        for(int i=0;i<p.size();i++){
            pfreq[p[i]-'a']++;
            sfreq[s[i]-'a']++;
        }

 
        for(int i=0;i<s.size()&&i+p.size()-1<s.size();i++){
             if(i!=0){
                 sfreq[s[i-1]-'a']--;
                 sfreq[s[i+p.size()-1]-'a']++;
             }
            
            if(sfreq==pfreq)
                ans.push_back(i);
            
            
        }
        
        return ans;
    }
};