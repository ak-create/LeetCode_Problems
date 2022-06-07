class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>>ans;
        
        int start=intervals[0][0];
        int end=intervals[0][1];
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]>end)
            {
                vector<int>v;
                v.push_back(start);
                v.push_back(end);
                ans.push_back(v);
                start=intervals[i][0];
                end=intervals[i][1];
            }
            start=min(start,intervals[i][0]);
            end=max(end,intervals[i][1]);
                
        }
        if(ans.size()==0 or ans.back()[1]<start)
        {
             vector<int>v;
                v.push_back(start);
                v.push_back(end);
                ans.push_back(v);
        }
            
       
        return ans;
    }
};