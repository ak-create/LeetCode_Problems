class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int m=accounts[0].size();
        int mx=0;
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=0;j<m;j++){
                temp+=accounts[i][j];
            }
            mx=max(mx,temp);
        }
        
        return mx;
    }
};