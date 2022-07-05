class Solution {
public:
    bool isValid(int i,int j,vector<vector<int>>&vis,int n)
    {
        int indi=i,indj=j;
        while(indi>=0 and indj>=0)
        {
            if(vis[indi][indj]==1)
                return false;
            indi--;indj--;
        }
        indi=i,indj=j;
        while(indi>=0)
        {
            if(vis[indi][indj]==1)
                return false;
            indi--;
        }
        indi=i,indj=j;
        while(indj>=0)
        {
            if(vis[indi][indj]==1)
                return false;
            indj--;
        }
         indi=i,indj=j;
        while(indi>=0 and indj<n)
        {
            if(vis[indi][indj]==1)
                return false;
            indi--;indj++;
        }
        return true;
    }
    void rec(int indi,int cnt,vector<string>&ds,vector<vector<int>>&vis,vector<vector<string>>&v,int n)
    {
        if(cnt==n and indi==n)
        {
            v.push_back(ds);
            return;
        }
        
        for(int j=0;j<n;j++)
        {
            if(isValid(indi,j,vis,n))
               {
                //cout<<"YES"<<" "<<indi<<" "<<j<<endl;
                   ds[indi][j]='Q';
                   cnt++;
                   vis[indi][j]=1;
                   rec(indi+1,cnt,ds,vis,v,n);
                   cnt--;
                   ds[indi][j]='.';
                   vis[indi][j]=0;
               }
            
        }    
              
  }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>v;
        vector<vector<int>>vis(n,vector<int>(n,0));
        vector<string>ds(n,string(n,'.')); 
        rec(0,0,ds,vis,v,n);
        return v;
    }
};