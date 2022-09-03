class Solution {
public:
    void rec(int sz,int no,int n,int k,vector<int>&ans)
    {
        if(sz==n)
        {
            ans.push_back(no);
            return;
        }
        
        
            if(sz==0)
            {
                for(int i=1;i<=9;i++){
                    rec(sz+1,no+i,n,k,ans);
                }
            }
        else
        {
            for(int i=0;i<=9;i++){
                if(abs((no%10)-i)==k)
                    rec(sz+1,(no*10)+i,n,k,ans);
                }
        }
        }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>ans;
        rec(0,0,n,k,ans);
        return ans;
    }
};