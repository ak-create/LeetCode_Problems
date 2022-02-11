class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size())
            return false;
        
        vector<int>freq_s1(26,0);
        for(int i=0;i<s1.size();i++){
            freq_s1[s1[i]-'a']++;
        }
         vector<int>freq_s2(26,0);
        int j=0;
         for( j=0;j<s1.size();j++){
                freq_s2[s2[j]-'a']++;
            }
        if(freq_s1==freq_s2)
                return true;
        for(int i=j;i<s2.size();i++){
           freq_s2[s2[i]-'a']++;
            freq_s2[s2[i-s1.size()]-'a']--;
            if(freq_s1==freq_s2)
                return true;
            
        }
        return false;
    }
};