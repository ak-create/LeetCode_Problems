class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>v(26,0),vv(26,0);
        for(int i=0;i<magazine.size();i++)
            v[magazine[i]-'a']++;
        
        for(int i=0;i<ransomNote.size();i++)
            vv[ransomNote[i]-'a']++;
        
         for(int i=0;i<26;i++)
         if(v[i]<vv[i])
             return false;
        
        return true;
    }
};