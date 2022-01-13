class Solution {
public:
    
   static bool mysort(vector<int>&v1,vector<int>&v2){       
        return v1[1]<v2[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        sort(points.begin(),points.end(),mysort);
        int pre=0;
        int cnt=1;
      
        pre=points[0][1];
        
        for(int i=1;i<n;i++){
            if(points[i][0]>pre){
                pre=points[i][1];
                cnt++;
            }
        }
        
        return cnt;
    }
};