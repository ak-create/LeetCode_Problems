class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        int ind=-1;
        int mn=1e9;
        for(int i=0;i<arr.size();i++)
            if(abs(x-arr[i])<mn)
            {
                mn=abs(x-arr[i]);
                ind=i;
            }
        
        int l=ind-1,r=ind+1;
        ans.push_back(arr[ind]);
        k--;
        while(k--)
        {
            if(l>=0 and r<arr.size() and abs(x-arr[l])>abs(x-arr[r]))
                ans.push_back(arr[r++]);
            else if(l>=0 and r<arr.size())
                ans.push_back(arr[l--]);
            else if(l>=0)
                   ans.push_back(arr[l--]);
            else if(r<arr.size()-1)
                ans.push_back(arr[r++]);
            
        }
        sort(ans.begin(),ans.end());
        return ans;
                
    }
};