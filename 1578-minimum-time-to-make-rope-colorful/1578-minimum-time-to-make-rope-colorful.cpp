class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int j=i;
            int mx=0,sum=0;
            while(j<n and colors[j]==colors[i])
            {
                mx=max(mx,neededTime[j]);
                sum+=neededTime[j];
                j++;
            }
            ans+=(sum-mx);
            i=j-1;
        }
        
        return ans;
    }
};