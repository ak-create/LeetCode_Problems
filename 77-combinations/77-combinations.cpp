class Solution {
public:
      vector<vector<int>>ans;
    
    void rec(vector<int>&arr, vector<int>&v, int ind, int k)
    {
        if(v.size()==k){
            ans.push_back(v);
            return ;
        }
        
        if(ind>=arr.size())
            return;
        
        else{
            v.push_back(arr[ind]);
            rec(arr,v,ind+1,k);
            v.pop_back();
            rec(arr,v,ind+1,k);
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
          vector<int>arr;
        
        for(int i=1;i<=n;i++)
            arr.push_back(i);
        
        vector<int>v;
        rec(arr,v,0,k);
        
        return ans;
    }
};