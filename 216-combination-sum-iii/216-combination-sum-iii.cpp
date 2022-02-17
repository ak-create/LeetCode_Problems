class Solution {
public:
    vector<vector<int>>ans;
    
    void rec(vector<int>&arr, vector<int>&v, int ind, int k, int n)
    {
        if(n==0&&v.size()==k){
            ans.push_back(v);
            return ;
        }
        
        if(ind>=9||n<0)
            return;
        
        else{
            v.push_back(arr[ind]);
            rec(arr,v,ind+1,k,n-arr[ind]);
            v.pop_back();
            rec(arr,v,ind+1,k,n);
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>arr;
        for(int i=1;i<=9;i++)
            arr.push_back(i);
        vector<int>v;
        rec(arr,v,0,k,n);
        
        return ans;
    }
};