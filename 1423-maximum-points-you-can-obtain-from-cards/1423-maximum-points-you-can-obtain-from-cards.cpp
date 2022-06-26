class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int mx=0;
        int sum=accumulate(cardPoints.begin(),cardPoints.end(),0);
        int n=cardPoints.size();
        int curr_sum=0;
        for(int i=0;i<n-k;i++)
        {
            curr_sum+=cardPoints[i];
        }
        mx=max(sum-curr_sum,mx);
        for(int i=n-k;i<n;i++)
        {
            curr_sum-=cardPoints[i-(n-k)];
            curr_sum+=cardPoints[i];
              mx=max(sum-curr_sum,mx);
        }
        return mx;
    }
};