class Solution {
public:
    struct comp
    {
      bool operator()(pair<int,int> const &p1,pair<int,int> const &p2)
         {
            return p1.second<p2.second;}
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int,int>mp;
        for(int ele:nums)
            mp[ele]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp>pq;
        
        for(auto x:mp)
        {
            pq.push({x.first,x.second});
        }
        
        vector<int>topK;
        for(int i=0;i<k;i++)
        {
            topK.push_back(pq.top().first);
            pq.pop();
        }
        return topK;
    }
};