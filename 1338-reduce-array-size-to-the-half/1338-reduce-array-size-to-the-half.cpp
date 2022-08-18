class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        map<int,int>amp;
        vector<int>vp;
        for(int x:arr)
            mp[x]++;
        
        int ans=0;
        int n=arr.size();
        
        for(auto it:mp)
         vp.push_back(it.second);
        
        int temp=n/2;
        sort(vp.begin(),vp.end(),greater<int>());
        int i=0;
        while(n>temp and i<vp.size())
        {
            n-=(vp[i]);
            ans++;
            i++;
        }
        return ans;
        
        
    }
};