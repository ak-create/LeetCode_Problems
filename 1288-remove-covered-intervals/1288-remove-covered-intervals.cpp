class Solution {
public:
    
    static bool mycmp(vector<int>&v1,vector<int>&v2){
        if(v1[0]==v2[0])
            return v1[1]>v2[1];
        else
            return v1[0]<v2[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end(),mycmp);
        int ans=0;
        int endpt=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][1]<=endpt){
                ans++;
            }
            else{
                endpt=intervals[i][1];
            }
                
        }
        return intervals.size()-ans;
    }
};