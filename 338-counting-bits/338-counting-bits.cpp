class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int num=0;num<=n;num++){
            int cnt=0;
        for(int i=0;i<=20;i++){
            if((1<<i)&num)
                cnt++;
        }
            ans.push_back(cnt);
    }
        return ans;
    }
};