class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
//vector<int>dp(n,0);
        int a=cost[0];
        int b=cost[1];
        for(int i=2;i<n;i++)
        {
            int c=min({a,b})+cost[i];
            a=b;
            b=c;
        }
        return min(b,a);
    }
};