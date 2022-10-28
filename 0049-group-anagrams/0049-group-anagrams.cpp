class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     vector<vector<int>>freq(strs.size(),vector<int>(26,0));
        sort(strs.begin(),strs.end());
        
        vector<vector<string>>ans;
        vector<string>temp;
        temp.push_back(strs[0]);
        for(int i=0;i<strs.size();i++)
        {
            for(auto s:strs[i])
                freq[i][s-'a']++;
        }
        
        map<vector<int>,vector<string>>mp;
        for(int i=0;i<strs.size();i++)
        {
            mp[freq[i]].push_back(strs[i]);
        }
        
        for(auto it:mp)
            ans.push_back(it.second);
        
        return ans;
    }
};