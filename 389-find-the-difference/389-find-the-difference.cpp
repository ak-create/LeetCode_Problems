class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<t.size();i++){
            if(t[i]!=s[i])
                return t[i];
        }
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']--;
        }
        for(int i=0;i<t.size();i++){
            freq[t[i]-'a']++;
        }
        char c;
        for(int i=0;i<26;i++){
            if(freq[i]>=1){
                char c='a'+i;
                break;
            }
        }
        return c;
    }
};