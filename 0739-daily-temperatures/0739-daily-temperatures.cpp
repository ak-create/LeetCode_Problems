class Solution {
public:
  static  bool mycmp(pair<int,int>&p1,pair<int,int>&p2)
    {
        if(p1.first==p2.first)
            return p1.second<p2.second;
        return p1.first>p2.first;
    }
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       // 69->5,71->4,72->6,73->1,73->8,74->2,75->3,76->7
            vector<pair<int,int>>vp;
        for(int i=0;i<temperatures.size();i++)
        {
            vp.push_back({temperatures[i],i});
        }
        sort(vp.begin(),vp.end(),mycmp);
        // reverse(vp.begin(),vp.end());
        vector<int>ans(temperatures.size(),0);
        set<int>s;
        s.insert(vp[0].second);
        ans[vp[0].second]=0;
        for(int i=1;i<vp.size();i++)
        {
            auto it=s.lower_bound(vp[i].second);
            if(it!=s.end())
              ans[vp[i].second]=*it-vp[i].second;
             else
                 ans[vp[i].second]=0;
            s.insert(vp[i].second);
            
                
        }
        return ans;
    }
};