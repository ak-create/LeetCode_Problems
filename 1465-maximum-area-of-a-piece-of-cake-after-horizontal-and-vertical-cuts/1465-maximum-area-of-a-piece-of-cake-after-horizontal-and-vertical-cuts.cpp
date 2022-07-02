class Solution {
public:
    const int md=1000000007;
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int hmax=1,vmax=1;
        for(int i=1;i<horizontalCuts.size();i++)
        {
            hmax=max(hmax,horizontalCuts[i]-horizontalCuts[i-1]);
        }
        for(int i=1;i<verticalCuts.size();i++)
        {
            vmax=max(vmax,verticalCuts[i]-verticalCuts[i-1]);
        }
        
        long long ans=((long long)hmax*(long long)vmax)%md;
        return ans;
        
    }
};