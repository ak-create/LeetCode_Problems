class Solution {
public:
    bool static mycmp(pair<int,string>&p1,pair<int,string>&p2)
    {
        if(p1.first==p2.first)
            return p1.second>p2.second;
        return p1.first<p2.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        for(auto s:words)
            mp[s]++;
        vector<pair<int,string>>v;
        for(auto it:mp)
            v.push_back({it.second,it.first});
         
        sort(v.begin(),v.end(),mycmp);
        reverse(v.begin(),v.end());
        vector<string>ans;
        for(int i=0;i<k;i++)
            ans.push_back(v[i].second);
        
        return ans;
    }
};